//
//  main.c
//  MyAtoi
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

/*
 把一个整型的数字串转化为整数
 atoi 将一个字符串转成一个整数，从最前面开始，如果有空格，则跳过空格，直到第一个非空格字符，开始转换.如果这个字符是'+'或'-'，则会转换为正／负数，继续，直到非数字字符，结束转换!
 //转换数字串
 */
//"    -123"
//"123"
//s就是字符串的首字符地址
//用数组形式实现
int  myAtoi(const char * s){
    //首先跳过空格
    int i;
    for (i = 0; s[i] != '\0'&&s[i] == ' '; i++) {
        //最前面如果是空格一直遍历，直到遇到不是空格结束
    }
    //判断'+'/'-'
    int tag = 1;//标记正负号
    
    if (s[i] == '+') {
        tag = 1;
        i++;//下标加1
    }else if (s[i] == '-'){
        tag = -1;
        i++;
    }
    //"   -123";
    //"123"
    //"   123a"
    int sum = 0;
    while (s[i] >= '0'&&s[i] <= '9') {//不是数字字符就结束
        int bit = s[i]-'0';//转化为数字
        sum = sum*10 + bit;
        i++;
        /*
         bit 1  sum = 0*10+1;
         bit 2  sum = 1*10 +2
         bit 3  sum = 12*10+3
         */
    }
    return sum*tag;
}
//指针形式实现
int myAtoi2(const  char *s) {
    //跳过空格
    while (*s != '\0'&&*s == ' ') {
        //指针右移
        s++;
    }
    //判断正负号
    int tag = 1;
    if (*s == '+') {
        tag = 1;
        s++;//右移
    }else if (*s == '-') {
        tag = -1;
        s++;
    }
    //"   -123"
    int sum = 0;
    while (*s >= '0'&& *s <= '9') {
        int bit = *s-'0';
        sum = sum * 10 + bit;
        s++;//右移
    }
    return sum * tag;
}

int main(int argc, const char * argv[])
{
    printf("%d\n",myAtoi("123"));//123
    printf("%d\n",myAtoi("-123"));//-123
    printf("%d\n",myAtoi("   -123"));//-123
    printf("%d\n",myAtoi("   -123a"));//-123
    printf("%d\n",myAtoi("-a123"));//0
    
    printf("%d\n",myAtoi2("123"));//123
    printf("%d\n",myAtoi2("-123"));//-123
    printf("%d\n",myAtoi2("   -123"));//-123
    printf("%d\n",myAtoi2("   -123a"));//-123
    printf("%d\n",myAtoi2("-a123"));//0
    
    return 0;
}

