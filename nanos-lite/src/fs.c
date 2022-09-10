#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

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
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write, 0},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write, 0},
#include "files.h"
};

static size_t fs_size;

void init_fs() {
  // TODO: initialize the size of /dev/fb
  fs_size = sizeof(file_table)/sizeof(file_table[0]);
  Log("Initializing fs, size = %d", fs_size);
}

int fs_open(const char *pathname, int flags, int mode){
  int i;
  for(i = 0; i < fs_size; i++){
    if(strcmp(pathname, file_table[i].name) == 0){
      printf("open fd = %d\n", i);
      return i;
    }
  }
  assert(0);
}

size_t fs_read(int fd, void *buf, size_t len){
  long i = -1;
  if(fd >= 3 && fd < fs_size){
    if(len + file_table[fd].open_offset <= file_table[fd].size){
      i = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
      file_table[fd].open_offset = file_table[fd].open_offset + (size_t)i;
    }
    else if(len + file_table[fd].open_offset > file_table[fd].size){
      i = ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, 
      file_table[fd].size - file_table[fd].open_offset);
      file_table[fd].open_offset = file_table[fd].size;
    }
    else{
      assert(0);
    }
  }
  else{
    assert(0);
  }
  return i;
}

size_t fs_write(int fd, const void *buf, size_t len){
  long i = -1;
  if(fd == FD_STDOUT || fd == FD_STDERR){
    for(i = 0; i < len; i ++){
      putch(*(char *)buf);
      buf++;
    }
  }
  else if(fd == FD_STDIN){
    i = 0;
  }
  else if(fd >= 3 && fd < fs_size){
    if(len + file_table[fd].open_offset <= file_table[fd].size){
      i = ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
      file_table[fd].open_offset += i;
    }
    else{
      assert(0);
    }
  }
  return i;
}

size_t fs_lseek(int fd, long offset, int whence){
  if(fd >= 3 && fd < fs_size){
    long open_offset = file_table[fd].open_offset;
    switch(whence){
      case SEEK_SET: 
      if(offset <= file_table[fd].size && offset >= 0){
        file_table[fd].open_offset = offset; 
        break;
      }
      else{
        printf("fs_lseek: SEEK_SET erro\n");
        return -1;
      }
      case SEEK_CUR: 
      if(offset + open_offset <= file_table[fd].size && offset + open_offset >= 0){
        file_table[fd].open_offset = open_offset + offset; 
        break;
      }
      else{
        printf("fs_lseek: SEEK_CUR erro\n");
        return -1;
      }
      case SEEK_END: 
      if(offset <= 0 && (long)file_table[fd].size + offset >= 0){
        file_table[fd].open_offset = (long)file_table[fd].size + offset;
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
  return file_table[fd].open_offset;
}

int fs_close(int fd){
  file_table[fd].open_offset = 0;
  printf("close fd = %d\n", fd);
  return 0;
}