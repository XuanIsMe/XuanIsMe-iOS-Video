//
//  main.c
//  C2_函数&栈
//
//  Created by LZXuan on 14-11-4.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#include <stdio.h>
int add(int a,int b){
    //如果函数add调用结束遇到return 那么函数会出(pop)栈
    //函数栈出栈之后就会释放
    
    //add函数中的a 和b 在调用add函数的时候 这两个变量会在add栈中开辟
    return a+b;
}
/*
 1.当前的.c文件就是程序源代码文件。通过编译源代码 会生成一个可执行的二进制文件，并且会放在硬盘上
 2.一旦运行可执行程序。可执行程序将会占用的内存空间
    cpu 执行程序首先会把二进制的可执行文件拷贝到内存中的代码段
    接下来就会从main函数开始执行，这时系统会调用main函数会压一个main栈，然后调用add函数会一个add栈，执行add函数中的代码，遇到return函数返回，add栈会出栈(栈释放)，接下来执行printf函数压printf栈，执行完printf函数printf栈出栈，再去执行add函数调用，又会压add栈，执行add里面的代码执行完遇到return返回 出栈，最后执行main函数中的return 0  main函数返回，main栈出栈 ，整个程序结束
 
 */

int sub(int a,int b){
    
    return a-b;
}
//如果函数没有被调用 根本不会压栈

int main(int argc, const char * argv[])
{
    //ret变量的空间 在main栈
    
    int ret = add(1, 3);
    //一旦调用函数才会压栈
    //上面调用了add(1,3);函数那么就会压一个add函数栈
    //push压栈
    
    //栈的特点:先进（push）后出
    
    printf("ret:%d\n",ret);//压一个printf栈
    
    add(1, 3);

    return 0;
}





