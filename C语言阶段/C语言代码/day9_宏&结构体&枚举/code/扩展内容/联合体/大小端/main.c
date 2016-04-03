//
//  main.c
//  大小端
//
//  Created by lzxuan on 15/12/30.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

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

//定义联合
union test{
    int x;
    char y;
};
//返回值 1表示小端 0 表示大端
int isLittleEndian(void) {
    union test new;
    new.x = 1;
    return (int)(new.y);
}

//1004           1001 地址
//XXXX|XXXX|XXXX|XXXX|
//0000000...  0000 0001 //数据

int isLittleEndian2(void) {
    union test new;
    new.x = 1;
    return *((char *)(&new.x));
}



int main(int argc, const char * argv[])
{
    if (isLittleEndian()) {
        printf("我的电脑是小端存储\n");
    }
    
    if (isLittleEndian2()) {
        printf("我的电脑是小端存储\n");
    }else{
        printf("大端存储\n");
    }
    
    return 0;
}
