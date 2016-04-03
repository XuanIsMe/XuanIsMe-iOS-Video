//
//  main.c
//  Void*
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    void * 泛型 指针 --》可以指向任意类型的空间
    int a = 3;
    int *p = &a;
    
    void *p1 = p;
    
    double f = 1.23;
    p1 = &f;
    
    char c = 'A';
    p1 = &c;
    
    //当我们暂时 不清楚 用什么类型的指针的时候 可以用void *指向
    //void *也可以赋值给 任意类型的指针变量
    
    double *q2 = p1;
    
    
    //*p1 = 1; void *不能直接 对指针 做取*  *p1 错
    //如果要想获取 void  * 指针指向的内容 那么需要强制转换
    //如果 void *指向的是 一个char  强制转换为char *
    *((char *)p1) = 'X';
    
    
    return 0;
}








