//
//  main.c
//  C6_函数练习
//
//  Created by lzxuan on 15/12/28.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

//系统 有 isupper 这个库函数 最好 不要 跟库函数重名 否则会重复定义
//int isupper(int number) {
//    return 1;
//}




//1. 封装一个函数，返回两个整数里的较大那个
/*
 分析:需要两个数--》 通过两个参数传入
 //返回较大的 ，获取 较大的值 通过返回值
 */
int  maxOfNumber(int num1, int num2);

int  maxOfNumber(int num1, int num2) {
    /* 方法1:
    if (num1 > num2) {
        return num1;
    }else {
        return num2;
    }*/
    return num1 > num2?num1:num2;
}

//2. 封装一个函数，返回两个浮点数里的较小那个
double  minOfNumber(double num1,double num2);

//3. 封装一个函数，来判断一个字符是否是大写字母
//如果是，返回1,否则返回0!
int isMyUpper(char c);

//4. 封装一个函数，来判断一个字符是否是数字字符
//如果是，返回1,否则返回0!
int isMyNumber(char c);
int isMyNumber(char c) {
    if (c >= '0'&&c <= '9') {
        return 1;
    }else {
        return 0;
    }
}

//5. 封装一个函数，来判断一个字符是否是英文字母
//如果是，返回1,否则返回0!
int isMyEnglish(char c);

//6. 封装一个函数，传入一个字符，如果是大写那么转化小写然后返回，否则保持不变返回
char toMyLower(char c);

//7. 封装一个函数，实现将一个正整数，倒叙打印输出!
void reverse(int number);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");

    return 0;
}
