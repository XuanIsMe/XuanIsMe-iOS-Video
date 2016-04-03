//
//  main.c
//  C9_函数-栈空间
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
int add(int a,int b);
int add(int a,int b) {
    return a+b;
}
//书写的代码 在 磁盘
//编译代码 生成 可执行文件 在磁盘

//一旦我们运行 可执行文件/程序(二进制可执行文件)， cpu 就会 把 二进制的可执行文件 拷贝到 内存的代码段,cpu 去代码段  从main 开始 读 二进制代码，执行我们的程序


//只要 调用函数  这时 系统 就会在 栈段 开辟一个函数栈空间
//不调用 函数 就不会 压栈


//一旦程序 运行 首先 系统调用main函数，这时就会在栈段压一个main栈，下面遇到了调用 add(23,25),然后再在栈段压一个add函数栈(和main栈是独立的),当add函数调用结束返回这时add 栈 就会释放，后面又遇到了printf函数，又会在栈段 压一个 printf栈，printf 调用结束，printf 栈 结束释放，最后main函数中遇到return 0，main函数结束返回，main栈 也会 释放。整个程序结束。

//栈 先进后出

int main(int argc, const char * argv[]) {
    int age = 25;//运行的时候 会为age 开辟一个空间 在main栈
    
    int sum = add(23, 25);
    printf("sum:%d\n",sum);
    
    
    return 0;
}









