//
//  main.c
//  联合体
//
//  Created by lzxuan on 15/12/30.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

//定义一个新的类型 联合体类型union test
union test {
    char a;
    int b;
};
typedef union test Test;

//所有的成员 共享一个相同的内存区域
//节省内存空间 最终就是以最大成员的类型作为整个联合的空间大小
/*
 XXXX 1004
 XXXX 1003
 XXXX 1002
 XXXX 1001
 1004           1001
 XXXX|XXXX|XXXX|XXXX|
 0x 12   34   56   78
 
 //低字节放在低地址 高位放在高地址
 //0x12345678
 高--------》低
 
 大端:把数据存储到内存空间的时候，高字节存放到低地址，低字节放在高地址
 
 小端:把数据存储到内存空间的时候，高字节存放到高地址，低字节放在低地址
 
 //我们的电脑是小端存储
 
 */


int main(int argc, const char * argv[])
{
    Test u;
    //打印两个成员的空间地址
    //printf("&u.a:%p &u.b:%p\n",&u.a,&u.b);
    //两个成员空间的地址是一样的，所以他们共享的是第一字节的空间
    u.a = 'A';
    printf("u.a:%c\n",u.a);//A
    printf("u.b:%d\n",u.b);//65
    
    u.b = 0x12345678;
    printf("u.b:%#x\n",u.b);//0x12345678
    
    printf("u.a:%#x\n",u.a);//0x78
    
    return 0;
}

