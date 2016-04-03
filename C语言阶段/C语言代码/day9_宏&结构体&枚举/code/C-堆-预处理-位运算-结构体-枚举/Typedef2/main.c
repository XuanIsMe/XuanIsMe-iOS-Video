//
//  main.c
//  Typedef2
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>

typedef long  MyLong;
typedef char MyChar;

typedef int * INT;
//用 typedef 重新定义的函数指针类型FuncPoint--》就是 int(*)(int,int)
//FuncPoint 必须要在 函数指针类型中间用typedef 定义
typedef int (*FuncPoint)(int,int) ;


int add(int a,int b) {
    return a+b;
}
int main(int argc, const char * argv[]) {
    MyLong a = 1;//实际上就是long
    MyChar c = 'a';
    INT p;//int *
    //int (*func)(int,int) = add;
    FuncPoint func = add;//FuncPoint已经是函数指针了 不用加*了
    return 0;
}









