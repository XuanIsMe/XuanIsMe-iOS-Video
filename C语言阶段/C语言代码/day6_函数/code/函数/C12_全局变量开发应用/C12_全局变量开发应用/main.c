//
//  main.c
//  C12_全局变量开发应用
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
#include "myFunc.h"
#include "myFunc2.h"

extern int cnt;//引用 其他文件定义的全局变量


int main(int argc, const char * argv[]) {

    test();
    test2();
    printf("main_cnt:%d\n",cnt);

    return 0;
}
