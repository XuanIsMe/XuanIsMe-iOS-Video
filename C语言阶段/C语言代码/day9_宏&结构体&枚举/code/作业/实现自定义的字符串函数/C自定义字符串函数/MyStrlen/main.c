//
//  main.c
//  MyStrlen
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

//"hello"
//数组形式实现
size_t myStrlen(const char *s){
    size_t count = 0;//计数器
    //数组下标i  控制右移
    for (int i = 0;s[i]!='\0'; i++) {//统计不是\0的个数
        count++;
    }
    return count;
}
//指针形式
size_t myStrlen2(const char *s){
    size_t count = 0;
    while (*s != '\0') {
        count++;
        s++;//右移
    }
    return count;
}

size_t myStrlen3(const char *s){
    size_t count = 0;
    while (*s++ != '\0') {
        count++;
    }
    return count;
}



int main(int argc, const char * argv[])
{
    printf("%lu\n",myStrlen("hello"));
    printf("%lu\n",myStrlen2("hello"));
    printf("%lu\n",myStrlen3("hello"));
    return 0;
}

