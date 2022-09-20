#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t cfo;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_KEY, FD_FB, FD_DISINF};

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write, 0},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write, 0},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write, 0},
  [FD_KEY]    = {"/dev/events", 0, 0, events_read, invalid_write, 0},
  [FD_FB]     = {"/dev/fb", 0, 0, invalid_read, fb_write, 0},
  [FD_DISINF] = {"/proc/dispinfo", 0, 0, dispinfo_read, invalid_write, 0},
#include "files.h"
};

static size_t fs_size;

void init_fs() {
  // TODO: initialize the size of /dev/fb
  file_table[FD_FB].size = 300 * 400 * 4;
  fs_size = sizeof(file_table)/sizeof(file_table[0]);
  Log("Initializing fs, size = %d", fs_size);
}

int fs_open(const char *pathname, int flags, int mode){
  printf("%s\n", pathname);
  int i;
  for(i = 0; i < fs_size; i++){
    if(strcmp(pathname, file_table[i].name) == 0){
      //printf("open fd = %d\n", i);
      return i;
    }
  }
  assert(0);
}

size_t fs_read(int fd, void *buf, size_t len){
  long i = -1;
  if(file_table[fd].read == NULL){ 
    if(len + file_table[fd].cfo <= file_table[fd].size){
      i = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].cfo, len);
      file_table[fd].cfo = file_table[fd].cfo + (size_t)i;
    }
    else if(len + file_table[fd].cfo > file_table[fd].size){
      i = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].cfo, 
      file_table[fd].size - file_table[fd].cfo);
      file_table[fd].cfo = file_table[fd].size;
    }
    else{
      assert(0);
    }
  }
  else{
    i = (*file_table[fd].read)(buf, 0, len);
  }
  return i;
}

size_t fs_write(int fd, const void *buf, size_t len){
  long i = -1;
  if(file_table[fd].write == NULL){
    if(len + file_table[fd].cfo <= file_table[fd].size){
      i = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].cfo, len);
      file_table[fd].cfo += i;
    }
    else{
      assert(0);
    }
  }
  else{
    i = (*file_table[fd].write)(buf, file_table[fd].cfo, len);
    file_table[fd].cfo += i;
  }
  return i;
}

size_t fs_lseek(int fd, long offset, int whence){
  if(fd >= 3 && fd < fs_size){
    long cfo = file_table[fd].cfo;
    switch(whence){
      case SEEK_SET: 
      if(offset <= file_table[fd].size && offset >= 0){
        file_table[fd].cfo = offset; 
        break;
      }
      else{
        printf("fs_lseek: SEEK_SET erro\n");
        return -1;
      }
      case SEEK_CUR: 
      if(offset + cfo <= file_table[fd].size && offset + cfo >= 0){
        file_table[fd].cfo = cfo + offset; 
        break;
      }
      else{
        printf("fs_lseek: SEEK_CUR erro\n");
        return -1;
      }
      case SEEK_END: 
      if(offset <= 0 && (long)file_table[fd].size + offset >= 0){
        file_table[fd].cfo = (long)file_table[fd].size + offset;
        break;
      }
      else{
        printf("fs_lseek: SEEK_END erro\n");
        return -1;
      }
      default: return -1;
    }
  }
  else{
    assert(0);
  }
  return file_table[fd].cfo;
}

int fs_close(int fd){
  file_table[fd].cfo = 0;
  //printf("close fd = %d\n", fd);
  return 0;
}