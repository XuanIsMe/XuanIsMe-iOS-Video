//
//  main.c
//  条件编译2
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 #ifndef 宏名
    语句块1;
 #else
    语句块2;
 #endif
 执行过程:在预处理阶段，如果没有定义过宏 那么保留语句块1;否则保留语句块2
 
 #ifdef 宏名
    语句块1;
 #else
    语句块2;
 #endif
 执行过程:在预处理阶段，如果定义过宏 那么保留语句块1;否则保留语句块2
 */

#define A
int main(int argc, const char * argv[]) {

#ifndef A //如果没有定义宏A那么保留下面的代码
    printf("2015年的最后一天\n");
    printf("2015年的最后一天\n");
#else
    printf("明天是2016年的第一天\n");
    printf("明天是2016年的第一天\n");
    
#endif
    
#ifdef B //如果定义过宏B那么保留下面的代码
    printf("2015年的最后一天\n");
    printf("2015年的最后一天\n");
#else
    printf("明天是2016年的第一天\n");
    printf("明天是2016年的第一天\n");
    
#endif
    
    
#ifndef C  //如果没有定义过宏C 执行下面的语句
#define C
    printf("新年快乐\n");
#endif
    
#ifdef C
    printf("新年不快乐吗？\n");
#endif
    
    
    
    return 0;
}
