//
//  main.c
//  C4_函数基本语法2
//
//  Created by lzxuan on 15/12/28.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

/*
 3.函数三要素：
 
 返回值 函数名 参数
 
 函数语法
 1.声明格式  返回值 函数名(形参);
 2.调用格式 函数名(实参);
 
 自定义函数步骤:
 1.根据要求 (遵循函数三要素)声明一下函数
 2.实现函数体

 */
//函数 必须要在main 函数 外面定义
//Apple 函数名的命名 规范:函数名首字母小写，后面每出现一个单词首字母大写
//函数名要有意义

//一、无参数的函数
//函数 声明
void printTenHelloWorld(void);
//函数 声明 可以多次
//void printTenHelloWorld(void);
//void printTenHelloWorld(void);

/*
 快捷键 收函数代码
 cmd + alt（option）+ 左/右键 收或者展开指定函数代码
 cmd + alt（option）+shift+ 左/右键 收或者展开所有函数代码
 
 */

//函数的实现 ->函数声明+函数体{}
void printTenHelloWorld(void) {
    for (int i = 0; i < 10;i++) {
        printf("hello world!\n");
    }
    return;// return; ->表示 返回空 和 上面的返回值类型 void 对应
    //当前 这种情况 可以省去 return;
    
    //我们一般要在函数的最后加 一个 return
    //如果 是return 空  那么 我们可以省去
    //如果 返回值不是空 必须要写return 一个值;
}

/*
 1.函数实现内部不能在 定义实现其他函数
 2.函数不能连续定义实现两次 否则重复定义
void printTenHelloWorld(void) {
    
}*/

//二、带参数的函数
//实现一个函数 功能 打印n个helloworld
//从外界 向函数体内部 传入 一个值
//外界 要想 传到 函数体 内部 一个值 通过函数参数(形参:形式参数)

void printHelloWorld(int n) {//函数的参数 就相当于在函数内部定义了一个变量
    //int n;//函数参数 已经定义过了 不能再定义了否则是重复定义
    for (int i = 0; i < n;i++) {
        printf("轩哥 让你 做俯卧撑\n");
    }
//    return; // 返回值 是void 可以省去
}



//综上 函数一处定义 处处使用

int main(int argc, const char * argv[]) {
    
    /*
    for (int i = 0; i < 10;i++) {
        printf("hello world!\n");
    }*/
    
    //如果是无参函数 调用的时候 不用写参数
    
    printTenHelloWorld();//调用函数
    //一旦 执行调用函数 ，函数体的代码块 就会被执行
    //如果 不调用 函数，那么函数体的代码是不会执行的
    
    //再打印 10个helloworld
    printTenHelloWorld();
    
    //调用 带参数的 函数
    //如果有参数 必须 要传参
    //调用的时候 传得 10叫做实参(实体参数)
    //传参:把 实参 传给 函数里面的形参 (就是给形参赋值)
    printHelloWorld(10);
    
    //再做 100个
    printHelloWorld(100);
    
    
    return 0;
}







