//
//  main.c
//  C8_项目开发代码结构
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//运算函数
/*
//函数声明
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int myDiv(int a,int b);

//函数实现
int add(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}
int myDiv(int a,int b) {
    if (b) {
        return a/b;
    }else {
        return -999999;//可以用一个 常量 表示 出错了
    }
}
 */
//项目开发中 我们通常 会把函数的声明和函数的实现 进行分离，分离到不同的文件中，
//把函数声明 放在头文件
//把函数实现 方法源码文件 *.c
//我们把 MAIN函数 单独放在一个.c文件。
//如果 其他文件 要想调用 指定函数 ，那么 需要包含函数声明所在的头文件。


//#include "myCalculation.c" //错 #include 只能包含头文件 不能包含.c/.m 等源码文件

#include "myCalculation.h" //下面 要使用 头文件中声明的函数
//包含 系统的头文件 用 <>
//包含自定义的头文件 用""
#include "myCmp.h"


int main(int argc, const char * argv[]) {
    int sum = add(2,4);
    printf("sum:%d\n",sum);
    
    int s = sub(2,4);
    printf("s:%d\n",s);
    
    
    printf("max:%f\n",maxOfNumber(99, 100));
    return 0;
}








