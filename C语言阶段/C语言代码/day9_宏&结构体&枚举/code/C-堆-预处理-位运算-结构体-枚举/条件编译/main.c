//
//  main.c
//  条件编译
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 条件编译
 #if 值
    语句块;
 #endif 最后 加#endif
 
 执行过程:在预处理阶段 判断 值 是否为真 如果为真，那么保留语句块的内容，否则 不保留 。
 
 
 #if 值
    语句块1;
 #else
    语句块2;
 #endif
  执行过程:在预处理阶段 判断 值 是否为真 如果为真，那么保留语句块1的内容，否则 保留语句块2的内容 。
 
 
 */

#define SW 1
#define A 2

#if A==0
int cnt = 1;
#elif A==1
int cnt = 2;
#elif A==2
int cnt = 100;
#endif


int main(int argc, const char * argv[]) {
    
    int a = 1;//这条语句运行程序 的把1放入一个空间a
    
    
    //下面的#if 是编译代码预处理阶段 做的
    
#if a   //这里的a 不是上面的变量a 在这里 只是一个未知的一个符号 认为是0
    printf("XXXXXX\n");
#endif
    
    printf("cnt:%d\n",cnt);
#if 0
    printf("hello 你好!\n");
    printf("hello 你好!\n");
    printf("hello 你好!\n");
#endif
    
#if SW  //宏开关的形式
    printf("hello 你好!\n");
    printf("hello 你好!\n");
    printf("hello 你好!\n");
#else
    printf("小黄和小红有激情!\n");
    printf("小黄和小红有激情!\n");
    printf("小黄和小红有激情!\n");
#endif
    
    
    return 0;
}









