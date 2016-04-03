//
//  main.c
//  C3_函数基础
//
//  Created by lzxuan on 15/12/28.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

//函数:就是具有某个特定功能的代码块
// 有名字的代码块

//实现 一个 专门 打印 三角形的函数
/*
 函数三要素
 1.函数名
 2.函数的返回值
 3.函数的参数
 
 void printTriangle (void); //函数的声明
 {}中称作为函数体 / 具有某个功能
 
 //函数怎么用 ？ 先定义 再使用
 函数名(参数);--》调用函数--》执行函数体代码块的内容
 
 
 main 函数:->系统 运行程序 时候系统自动调用 的，我们不要调用
 */
void printTriangle (void) {
    for (int i = 0;i < (7+1)/2;i++) {
        //空格
        for (int j = 0;j < (7-1)/2-i;j++) {
            printf(" ");
        }
        //*
        for (int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
}


int main(int argc, const char * argv[]) {
    
    printTriangle();
    printTriangle();
    printTriangle();
    
    
    
    //打印 等腰三角形 一堆代码
   /*
    for (int i = 0;i < (7+1)/2;i++) {
        //空格
        for (int j = 0;j < (7-1)/2-i;j++) {
            printf(" ");
        }
    
        for (int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0;i < (7+1)/2;i++) {
        //空格
        for (int j = 0;j < (7-1)/2-i;j++) {
            printf(" ");
        }
    
        for (int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0;i < (7+1)/2;i++) {
        //空格
        for (int j = 0;j < (7-1)/2-i;j++) {
            printf(" ");
        }
    
        for (int j = 0;j < 2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }*/
    
    return 0;
}
