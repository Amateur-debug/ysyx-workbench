/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>
#include <trace.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);
void init_mtrace(const char *mtrace_file);
void init_ftrace(const char *ftrace_file);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
static char *elf_file = NULL;
char *mtrace_file = NULL;
char *ftrace_file = NULL;


static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"mtrace"   , required_argument, NULL, 'm'},
    {"ftrace"   , required_argument, NULL, 'f'},
    {"elf"      , required_argument, NULL,  2},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhf:m:l:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'm': mtrace_file = optarg; break;
      case 'f': ftrace_file = optarg; break;
      case 2: elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Open the mtrace file. */
  init_mtrace(mtrace_file);

  /* Open the ftrace file. */
  init_ftrace(ftrace_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));
  
  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif

void init_mtrace(const char *mtrace_file){
  FILE *p = fopen(mtrace_file, "w");
  fclose(p);
}

_ELF_function ELF_function[MAX_FUC_NUM];
int ELF_function_num;

void init_ftrace(const char *ftrace_file){
  FILE *ft = fopen(ftrace_file, "w");
  fclose(ft);
  FILE *fp = fopen(elf_file, "r");
  Elf64_Ehdr ehdr;
  assert(fread(&ehdr, sizeof(Elf64_Ehdr), 1, fp) == 1);
  Elf64_Shdr shdr[ehdr.e_shnum];
  fseek(fp, ehdr.e_shoff, SEEK_SET);
  assert(fread(&shdr, ehdr.e_shentsize * ehdr.e_shnum, 1, fp) == 1);
  Elf64_Shdr symtab_h = shdr[0];
  Elf64_Shdr strtab_h = shdr[0]; 
  int i;
  for(i = 0; i < ehdr.e_shnum; i++){
    if(shdr[i].sh_type == SHT_SYMTAB){
      symtab_h = shdr[i];
    }
    else if(shdr[i].sh_type == SHT_STRTAB && i != ehdr.e_shstrndx){
      strtab_h = shdr[i];
    }
  }
  int symtab_num = symtab_h.sh_size / sizeof(Elf64_Sym);
  Elf64_Sym symtab[symtab_num];
  fseek(fp, symtab_h.sh_offset, SEEK_SET);
  assert(fread(&symtab, symtab_h.sh_size, 1, fp) == 1);
  char strtab[strtab_h.sh_size];
  fseek(fp, strtab_h.sh_offset, SEEK_SET);
  assert(fread(strtab, strtab_h.sh_size, 1, fp) == 1);
  int n = 0;
  for(i = 0; i < symtab_num; i++){
    if((symtab[i].st_info & 0x0fu) == STT_FUNC){
      ELF_function[n].addr = symtab[i].st_value;
      ELF_function[n].size = symtab[i].st_size;
      int j = 0;
      while(strtab[symtab[i].st_name + j] != '\0'){
        ELF_function[n].name[j] = strtab[symtab[i].st_name + j];
        j++;
      }
      ELF_function[n].name[j] = strtab[symtab[i].st_name + j];
      n++;
    }
  }
  ELF_function_num = n;
  fclose(fp);
}