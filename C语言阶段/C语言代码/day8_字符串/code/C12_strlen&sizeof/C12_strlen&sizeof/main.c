//
//  main.c
//  C12_strlen&sizeof
//
//  Created by LZXuan on 14-11-9.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    char * p = "goodiOSClass";
    char a[100]  = "goodiOSClass";
    char c[] = "goodiOSClass";//把字符串赋给字符数组包括\0
    
    
    printf("sizeof(p) = %lu\n",sizeof(p));//8
    printf("sizeof(a) = %lu\n",sizeof(a));//100
    printf("sizeof(c) = %lu\n",sizeof(c));//13
    
    printf("strlen(p) = %lu\n",strlen(p));//12
    printf("strlen(a) = %lu\n",strlen(a));//12
    printf("strlen(c) = %lu\n",strlen(c));//12
    
    /*
     sizeof和strlen的区别
     1.sizeof是一个关键字 strlen是一个C语言库函数
     2.sizeof求的是数据类型空间大小
       strlen 求的字符串的有效字符长度
     3.sizeof是编译时概念 strlen是运行时概念
     
     编译时:  编译代码
     运行时:  运行程序
     */
    
    
    return 0;
}

