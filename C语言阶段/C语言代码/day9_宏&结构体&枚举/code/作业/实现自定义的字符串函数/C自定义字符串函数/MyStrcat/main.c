//
//  main.c
//  MyStrcat
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//char buff[256] = "welcome to ";
//char * p = "zhengzhou";
char * myStrcat(char * s1,const char *s2) {
    char *save = s1;
    while (*s1 != '\0') {
        s1++;//右移
    }//找到s1 \0的位置
    
    while ((*s1++ = *s2++));//从s1尾零的位置开始拷贝
    return save;
}
//hello
char * myStrcat2(char * s1,const char *s2) {
    char *save = s1;
    //让s1跳到\0的位置
    s1 = s1+strlen(s1);
    
    while ((*s1++ = *s2++));//从s1尾零的位置开始拷贝
    return save;//返回首字符地址
}


int main(int argc, const char * argv[])
{
    char  buf[256] = "hello";
    char * p = "world";
    char *ret = myStrcat(buf, p);
    printf("ret:%s buff:%s\n",ret,buf);
    
    
    return 0;
}
