//
//  myCalculation.c
//  C8_项目开发代码结构
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include "myCalculation.h"

//函数实现 单独放在 一个.c文件
int add(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}
int myDiv(int a,int b) {
    if (b) {
        return a/b;
    }else {
        return -999999;//可以用一个 常量 表示 出错了
    }
}
