//
//  main.c
//  C11_字符串长度Strlen
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

//字符串函数 所在头文件 string.h
#include <string.h>

//strlen求字符串的 有效 字符长度；

//size_t 就是 unsigned long
int main(int argc, const char * argv[]) {
    //从传入的字符串地址开始统计 字符个数遇到\0结束 统计 不统计\0
    unsigned long len = strlen("hello");
    printf("len:%lu\n",len);
    
    char c[256] = "12345678";
    printf("%lu\n",strlen(c));//8
    
    printf("%lu\n",sizeof(c));//256
    
    char * p = "12345";
    printf("%lu\n",strlen(p));//5
    printf("%lu\n",sizeof(p));//8
    
    printf("%lu\n",strlen("hello\0world"));//5
    
    
    return 0;
}








