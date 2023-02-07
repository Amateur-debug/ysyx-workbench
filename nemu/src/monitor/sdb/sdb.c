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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

#define STR1(R) #R
#define STR2(R) STR1(R)

static int is_batch_mode = false;
static int wp_number = 0;
WP *HEAD = NULL;

void init_regex();
void init_wp_pool();

void init_mtrace(){
  FILE *p = fopen(STR2(MTRACE_FILE), "w");
  fclose(p);
}

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args) {
  int steps;
  if(args == NULL){ steps = 1; }
  else sscanf(args,"%d",&steps);
  cpu_exec(steps);
  return 0;
}

static int cmd_info(char *args){
  char *SUBCMD[] = { "r", "w" };
  if(strcmp(SUBCMD[0], args) == 0){
    isa_reg_display();
  }
  else if(strcmp(SUBCMD[1], args) == 0){
    int i;
    WP *b = HEAD;
    for(i = 0; i < NR_WP; i++){
      if(b == NULL){
        break;
      }
      else{
        printf("监视点%d\t%s\n", b->NO, b->experence);
        b = b->next;
      }
    }
  }
  else printf("Unknown option \"%s\"\n",args);
  return 0;
}

static int cmd_x(char *args){
  char *N = strtok(NULL," ");  
  char *EXPR = strtok(NULL," "); 
  int n;
  paddr_t address;
  sscanf(N,"%d",&n);
  sscanf(EXPR, "%x", &address);  
  int len = 4;
  int i;
  for(i = 0;i < n;i++){
    word_t data ;
    data = paddr_read(address, len);
    printf("0x%016lx\n", data);  
    address = address + 4;
  }
  return 0;  
}

static int cmd_p(char *args){
  if(expr(args) == 0 ){
    extern int nr_token;
    int num = eval(0, nr_token - 1);
    printf("%s = %d\n", args, num);
  }
  return 0;
}

static int cmd_w(char *args){
  HEAD = new_wp(args);
  HEAD->NO = wp_number + 1;
  wp_number++;
  return 0;
}

static int cmd_d(char *args){
  int N;
  int i;
  sscanf(args,"%d",&N);
  for(i = 0; i < NR_WP; i++){
    if(HEAD == NULL){
      assert(0);
    }
    else if(HEAD->NO == N){
      break;
    }
    else{
      HEAD = HEAD->next;
    }
  }
  HEAD = free_wp(HEAD);
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Single step execution 单步执行", cmd_si },
  { "info", "Print program status 打印程序状态", cmd_info },
  { "x", "Scan memory 扫描内存", cmd_x},
  { "p", "表达式求值", cmd_p },
  { "w", "set watchpoint", cmd_w},
  { "d", "delte watchpoint", cmd_d},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();

#ifdef CONFIG_MTRACE
  init_mtrace();
#endif
}
