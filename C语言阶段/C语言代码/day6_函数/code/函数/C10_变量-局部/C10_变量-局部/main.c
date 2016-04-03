//
//  main.c
//  C10_变量-局部
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 变量作用域:从声明开始 到 包含它的{}结束
 内存布局: 在相应的函数栈 内 开辟空间
 生命周期:从函数压栈开始 到 相应的函数 出栈(释放)
 */
//局部变量:在{}内声明的变量 都是 局部变量

int add(int a,int b) {
    //这里的a b 在add函数 压栈的时候开辟空间
    return a+b;
}

int main(int argc, const char * argv[]) {
    
    //下面的a b 在 main栈
    int a = 100;
    int b = 200;

    add(1,2);//调用add 函数之后 会压一个add栈
    
    
    
    //age = 1;//错
    int age  = 25;//这就是一个局部变量
    
    if (1) {
        age = 1;
        int height = 180;
        height = 100;
    }
    //height = 200; 不能在这里使用
    
    for (int i = 0; i < 5; i++) {
        //作用域 在 从声明开始 到 for{}结束
        printf("for1\n");
    }
    
    for (int i = 0; i < 5; i++) {
        //这里的i 和 上面的i 不是同一个
        printf("for2\n");
    }
    for (int i = 0; i < 5; i++) {
        //这里的i 和 上面的i 不是同一个
        printf("for3\n");
        int number = 3; //在循环中定义一个变量 这个变量只会定义一次。
    }
    
    {
        int age = 1000;//这个age 和上面的不是同一个
        printf("age:%d\n",age);// 就近原则
    }
    
    
    return 0;
}







