//
//  main.c
//  C5_带参数的函数
//
//  Created by lzxuan on 15/12/28.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//实现一个 函数 功能 求两个数的和(返回两个数的和)

/*
 分析
 1.求两个数的和 外界要告知函数内部，通过两个参数
 2.函数 还要求 运行之后 得到 和 函数内部 要告知 外界 这个值，就用函数的返回值 return 值;
 
 外界要给函数内部 通信(传值) 用 函数参数
 函数内部要给外界 通信(传值) 用 函数返回值
 
 //函数的返回值 类型 要和 return 后面值的类型 保持一致
 */
//多个参数之间 逗号分隔
int add(int a ,int b);
//实现函数 有返回值 最后 必须要有return
//return 值; return 后面 可以是一个常量/变量/表达式
//函数体 内部 只要遇到return 整个函数 就返回(结束了)
int add(int a ,int b) {
    return a+b;
}


int main(int argc, const char * argv[]) {
    
    //带返回值的函数
    //带返回值的函数调用实际上 就是一个函数调用表达式
    //函数调用 表达式的值是：就是函数的返回值
    int sum = add(2, 3);
    //1.先调用函数2.把add(2,3)的返回值给sum
    printf("sum:%d\n",sum);
    printf("sum2:%d\n",add(3, 5));

    return 0;
}




