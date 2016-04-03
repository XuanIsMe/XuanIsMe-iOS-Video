//
//  main.c
//  C1_指针基础
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
unsigned long getCpuBits(void);
unsigned long getCpuBits(void) {
    return sizeof(int *)*8;
}

int main(int argc, const char * argv[]) {
    
    //指针变量:就是存放一个空间的地址(门牌号)的变量
    int a = 3;
    //&a 取 空间a 的地址
    int* p;//p是一个指针变量 p的类型 是 int*
    p = &a;//把a空间的地址 存放在 指针变量p空间中
    //int *类型的指针变量 存得是int 类型空间的地址
    //p 指向一个 int 类型的空间
    
    int * q = &a;//变量初始化  把a空间的 放在 指针变量q空间中
    
    
    long  l = 100;
    long * pLong = &l;
    //pLong 指向一个 long 类型的空间
    //pLong 存放的是long 类型的空间地址
    
    char c = 'A';
    char *pChar = &c;
    //pChar 指向一个 char 类型的空间
    //pChar 存放的是char 类型的空间地址
    
    
    //指针的类型实际上就是 在指向空间的类型 后面 + *
    
    printf("sizeof(char *) = %lu sizeof(pChar) = %lu\n",sizeof(char *),sizeof(pChar));//8 8
    printf("sizeof(int *) = %lu sizeof(p) = %lu\n",sizeof(int *),sizeof(p));//8 8
    printf("sizeof(double *) = %lu sizeof(pLong) = %lu\n",sizeof(char *),sizeof(pLong));//8 8
    //指针类型的空间大小 由系统cpu位数 决定
    //64 位系统 指针大小 统一 64/8 -->8字节
    //32                   32/8 -->4字节
    
    //实现一个函数 求当前电脑的cpu位数
    printf("cpu:%lu\n",getCpuBits());
    
    //如果一个空间的大小 大于 1字节 那么空间的门牌号 取空间第一个字节的门牌号
    
    /*
     内存中的每一个字节都有一个门牌号
     32位系统
     XXXX 0000....0000
     XXXX 0000....0001
     XXXX 0000....0010
     XXXX
     XXXX
     ....
     XXXX 1111...1111
     1k = 1024字节
     1M = 1024k
     1G = 1024M
     1T = 1024G
     //32位 内存 2^32字节<->2^32/(2^10)-->2^22K<->2^12M<->2^2G
     
     64位系统 呢？
     2^64---->2^34G
     */
    
    
    return 0;
}










