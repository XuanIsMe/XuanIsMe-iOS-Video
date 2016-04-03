//
//  main.c
//  C5_函数指针1
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
void printHello(void) {
    for (int i = 0; i < 10; i++) {
        printf("helloworld!\n");
    }
}

int main(int argc, const char * argv[]) {
    
    //C语言规定:函数名 就是函数入口地址
    //函数调用格式:    函数地址(参数);
    printHello();
    
    //函数是有类型的，怎么:盖住函数名 剩下的部分
    //函数地址类型怎么看: 函数的类型基础上 加 *
    
    //void printHello(void);函数类型 是 void (void);
    //函数地址类型 void (*) (void)
    //定义一个函数指针 保存 函数的地址
    void (*p)(void) = printHello;
//    printf("*p = %p\n",*p);
//    printf("p = %p\n",p);
    printf("******\n");
    p();
    
    
    return 0;
}










