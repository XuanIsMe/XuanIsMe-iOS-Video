//
//  main.c
//  C6_函数指针2
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

void printStar(void) {
    printf("********\n");
}

void printHello (void) {
    printf("hello\n");
}

void printWorld(void) {
    printf("World!\n");
}

//OC中 选择器SEL 和 block 语言 跟 函数指针类似
//Swift 中闭包 和 函数指针类似

//下面的函数 有个功能 可以打印 不同的图形 已知上面三个函数可以打印指定图形
/*
 第一种
 ##########
 **********
 ##########
 第二种
 ##########
 hello
 ##########
 第三种
 ##########
 world
 ##########
 */

//函数指针的应用:常常作为函数的参数 然后在函数的内部进行回调其他函数
void printString(void (*pFunc)(void)) {
    printf("############\n");
    pFunc();
//    printStar();
//    printHello();
//    printWorld();
    printf("############\n");
}



int main(int argc, const char * argv[]) {
    //void (*p) (void) = printStar();//不要加()
    void (*p) (void) = printStar;//函数名
    p();//执行 printStar
    
    p = printWorld;
    p();//执行printWorld
    
    p = printHello;
    p();//执行printHello
    
    //现象:不同的函数(类型一样) 我们可以用函数指针进行统一调用
    
    
    
    //我们 可以 打印 指定的不同图形
    printString(printStar);//把函数地址传给另外一个函数,另外一个函数内部可以调用
    printString(printHello);
    printString(printWorld);
    
    
    
    return 0;
}






