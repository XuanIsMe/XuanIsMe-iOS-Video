//
//  main.c
//  MyStrcpy
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

#include <string.h>
//char  buff[256] = {};
//"helloworld"
//数组形式
//把src指向的内容依次拷贝到dst指向的空间
char * myStrcpy(char *dst,const char *src) {
    int i ;
    for (i = 0;i < strlen(src); i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';//最后有一个\0
    return dst;
}
//char  buff[256] = {};
//"helloworld"
//指针形式
char * myStrcpy2(char *dst,const char *src) {
    char *save = dst;//保存字符数组首字符地址
    while (*src != '\0') {
        *dst = *src;
        dst++;//指针右移
        src++;//指针右移
    }
    *dst = '\0';
    return save;//返回原数组的首元素地址
}
//hello
char * myStrcpy3(char *dst,const char *src) {
    char *save = dst;//保存字符数组首字符地址
    while ((*dst++ = *src++));
    return save;//返回原数组的首元素地址
}

int main(int argc, const char * argv[])
{
    char buff[256] = {};
    char *p = "xiaohuang";
    
    char * ret = myStrcpy(buff, p);
    printf("ret:%s buff:%s\n",ret,buff);
    
    char buff1[256] = {};
    ret = myStrcpy2(buff1, p);
    printf("ret:%s buff:%s\n",ret,buff1);
    
    char buff2[256] = {};
    ret = myStrcpy3(buff2, p);
    printf("ret:%s buff:%s\n",ret,buff2);
    
    
    return 0;
}

