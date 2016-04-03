//
//  myFunc2.c
//  C12_全局变量开发应用
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include "myFunc2.h"

//extern 外部的意思
extern int cnt;//引用 外部 其他文件中定义的全局变量
//在这里 不会重新定义 cnt

void test2(void) {
    printf("test2_cnt:%d\n",cnt);
}









