//
//  main.c
//  C9_字符串
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //这是一个字符数组
    //把右侧的一个字符串常量的字符 依次 的赋给 左侧数组
    char c[] = "1522---iOS";
    c[0] = '0';//字符数组可以改
    
    //"1522iOS"这是一个常量 默认在 内存中的只读数据段
    
    const char *p = "1522---iOS";//把字符串 第一个字符的地址给指针变量p
    
    printf("%p\n","1522iOS");
    printf("*p->%c\n",*p);
    //*p = 'Z'; //p 指针指向的 一个只读的字符串
    
    /*
     四个0
     0    数字0  内存中存 0
     '0'  字符0  内存存得是ACSII 值 48
     '\0' 尾零   内存的是ACSII 值 0
     "0"  字符串0  由字符'0'和'\0'构成 存了两个字符
     */
    //打印字符串
    printf("%s\n",p);
    printf("%s\n",c);
    //通过指针p 访问 上面 字符串中的i
    printf("%c\n",*(p+4));
    printf("%c\n",p[4]);
    
    
    printf("sizeof(c) = %lu\n",sizeof(c));//11
    printf("sizeof(p) = %lu\n",sizeof(p));//8
    
    
    return 0;
}






