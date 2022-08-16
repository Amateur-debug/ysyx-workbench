#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "/home/cxy/ysyx-workbench/npc/include/common.h"

#define STR1(R) #R
#define STR2(R) STR1(R)

extern

long long  getFileSize(FILE *fp){
    long long size;
    //定义pos
    fpos_t pos;
    //获取文件指针，写入pos
    fgetpos(fp,&pos);
    //文件指针指向末尾
    fseek(fp,0,SEEK_END);
    //获取文件指针到文件头部的字节大小
    size = ftell(fp);
    //文件指针还原
    fsetpos(fp,&pos);
    return size;
}

void load_img(){
    FILE *p = fopen(STR2(IMG), "rb");
    int size = getFileSize(p);
    if(fread(img, size, 1, p) != 1){
        assert(0);
    }
    fclose(p);
}

void init_mem(){
#ifdef IMG    
    load_img();
#endif
    memcpy(pmem, img, sizeof(img));
}

