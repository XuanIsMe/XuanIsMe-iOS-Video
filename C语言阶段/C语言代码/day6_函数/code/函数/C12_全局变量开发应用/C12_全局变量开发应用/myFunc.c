//
//  myFunc.c
//  C12_全局变量开发应用
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include "myFunc.h"
int cnt;


void test(void) {
    cnt++;
    printf("test_cnt:%d\n",cnt);
}