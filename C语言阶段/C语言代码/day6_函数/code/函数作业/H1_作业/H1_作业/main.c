//
//  main.c
//  H1_作业
//
//  Created by LZXuan on 14-11-5.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#include <stdio.h>

//1.求一个数的立方
double cube(double num);
//2	流程控制（闰年问题）	传入一个年份，判断该年份是平年还是闰年：
//注: 闰年就是第二个月有29天的那一年, 能被4整除但是不能被100整除的是闰年, 或者能被400整除的也是闰年
//如果是返回 1  不是返回0
int isLeap(int year);

//3	表达式(整数判断)	 传入一个数字, 判断这个数是否是正数(是，打印YES，不是输出NO)
//封装函数
void isPositiveNumber(int num);
//4	表达式(判断是否是偶数)传入一个数, 判断是否是偶数,如果是偶数,输出YES,如果是奇数.输出NO
void isOddNumber(int num);
//5	表达试(检测是否是80后)	 传入一个人的年份, 检测这个是否是80后,如果是输出YES,如果不是输出NO(1980-1989年)
void is80Year(int year);

//6	选择和判断(判断水仙花数)	判断一个三位数是否是水仙花数,如果是,返回1,如果不是返回0
//说明: 水仙花就是一个数的每个数字的立方和等于它本身的数, 例如 153就是一个水仙花数 1*1*1+5*5*5+3*3*3=153
int isFlower(int number);


//函数的实现
double cube(double num){
    return num*num*num;
}

int isLeap(int year){
    //    if ((year % 4 == 0&& year%100 != 0)||(year % 400 == 0)) {
    //        return 1;
    //    }else{
    //        return 0;
    //    }
    
    return (year % 4 == 0&& year%100 != 0)||(year % 400 == 0);
}
void isPositiveNumber(int num){
    if (num > 0) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return;
}
void isOddNumber(int num) {
    if (num%2 == 0) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return;
}
void is80Year(int year) {
    if (year >= 1980 && year <= 1989) {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return;
}

int isFlower(int number){
    
    if (number >= 100&&number <= 999) {
        int bit0 = number%10;
        int bit1 = number/10%10;
        int bit2 = number/100%10;
        
        if (bit0*bit0*bit0+bit1*bit1*bit1+bit2*bit2*bit2 == number) {
            return 1;
        }else{
            return 0;
        }
        
    }else{
        return 0;
    }
}

int main(int argc, const char * argv[])
{
    //测试
    
    //当函数有返回值的时候 可以表示一个表达式 而且有值
    //当函数返回类型void  那么这个 函数没有值

    //第一题
    printf("cube:%f\n",cube(3));
    //第二题
    printf("ret = %d\n",isLeap(2014));
    //第三题
    isPositiveNumber(-123);
    //第四题
    isOddNumber(4);
    //第五题
    is80Year(1989);
    //第六题
    printf("%d\n",isFlower(153));

    return 0;
}


