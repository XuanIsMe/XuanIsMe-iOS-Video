//
//  main.c
//  位字段
//
//  Created by lzxuan on 15/12/30.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

/*
 位字段：成员往往是unsigned  int/unsigned long / unsigned  short / unsigned char;
 typedef struct Word{
 //成员都是相同的类型
 unsigned int size:7;
 unsigned int color:8;
 unsigned int bold:1;
 unsigned int style:5;
 }Word_t;
 //节约内存空间
 */
typedef struct Word{
    //成员都是相同的类型
    unsigned int size:7; //在内存空间占前7位
    unsigned int color:8;//占8位
    unsigned int bold:1;//1
    unsigned int style:5;//5位
}Word_t;
//这个类型空间 最终 4字节


/*              style bold  color   size
 XXXXXXXX  XXX|XXXXX  |X|XXXXXXX X|XXXXXXX
 00000000  000 00011   1 1111111 1 1100100
 0x0003ffe4
 
 */
int main(int argc, const char * argv[])
{
    Word_t word;
    word.size =100;
    word.color = 255;
    word.bold = 1;
    word.style = 3;
    printf("size:%u color:%u bold:%u style:%u\n",word.size,word.color,word.bold,word.style);
    
    printf("%#x\n",*((int *)&word));
    
    return 0;
}
