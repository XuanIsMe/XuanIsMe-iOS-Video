//
//  main.c
//  H2_作业
//
//  Created by LZXuan on 14-11-5.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
/*
1.	循环(计算阶乘)	传入一个数为n, 计算这个数的阶乘, 例如一个数为5,则5的阶乘为 		       1*2*3*4*5=120
封装函数
*/
long long mul(int n) {
    long long  mul = 1;
    for (int i = 1; i <= n; i++) {
        mul *= i;
    }
    return mul;
}


/*
2.	循环(判断素数/质数)	传入一个数, 判断这个数是否为素数,如果是素数返回1 不是返回0
素数/质数就是除了1和它本身之外不能被其他数整除的数,从2开始的素数有 2,3,5,7,11,13等等
封装函数

*/

int  isPrime(int num) {
    int i  = 2;
    while (i < num) {
        if (num%i==0) {
            return 0;
        }
        i++;
    }
    return 1;
}

/*
3.   打印九九乘法表
封装一个函数打印九九乘法表
*/
void  print99Table(void){
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%2d ",j,i,i*j);
        }
        printf("\n");
    }
    return;
}



/*
 封装函数 打印质因数分解
4.   将一个正整数分解质因数。例如：传入90,打印出90=2*3*3*5。

*/
void  printPrimeNumber(int num){
    int i = 2;
    printf("%d = ",num);
    
    while (i < num) {
        if (num%i == 0) {//整除 说明是质因数
            printf("%d*",i);
            num /= i;
        }else{
            i++;//除不尽的时候除数+1
        }
    }
    printf("%d\n",i);
    return;
}


/*
5.	流程控制（for循环）	传入一个大写字母，如F
 封装函数：传入一个字符打印金字塔
void printPyramid(char c);

比如：
\
传入:F
\
输出：

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA
*/


void  printPyramid(char c){
    
    for (int i = 0; i < c-'A'+1; i++) {
        //空格部分
        for (int j = 0; j < c-'A'-i; j++) {
            printf(" ");
        }
        //左半部分
        for (int j = 0; j < i+1; j++) {
            printf("%c",'A'+j);
        }
        for (int j = i-1; j >= 0; j--) {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return;
    
}


/*
6.打印图形

void  printString(int n, char flag, char c);
//假设传入的分别是5    '#'  '+'
printString(5, '#', '+');
则打印一下图形
+ + # + +

+ # + # +

# + + + #

+ # + # +

+ + # + +
*/

void  printString(int n,char flag, char c){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(i-n/2)+abs(j-n/2) == n/2) {//如果水平方向到中心点的距离和竖直方向到中心点的距离之和恒等于 n/2那么就打印‘#’
                printf("%c",flag);
            }else{
                printf("%c",c);
            }
        }
        printf("\n");
    }
    return;//返回空
}

/*
 7.封装一个函数，实现将一个整数逆序，并返回
 例:传入 123  返回  321 --->（数字三百二十一）
 传入 0              0
 传入 -123    返回  -321
 
 int reverseNumber(int number);
 */
//函数返回值只能有一个

int reverseNumber(int number) {
    if (number == 0) {
        return 0;
    }
    int ret;
    //123  ->3*10+2->32*10+1->321
    int sum = 0;
    while (number != 0) {
        ret = number%10;
        sum = sum*10 + ret;
        number /= 10;
    }
    return sum;
    
    //负数对一个正数求余还是一个负数
    //-1%10== -1
    //-12%10==-2
}
int reverseNumber2(int number) {
    if (number == 0) {
        return 0;
    }
    int tag;
    if (number < 0) {//判断正负
        number = -number;
        tag = -1;//负
    }else{
        tag = 1;
    }
    
    int sum = 0;
    int ret;
    while (number != 0) {
        ret = number%10;
        sum = sum*10 + ret;
        number /= 10;
    }
    return sum*tag;
}


int main(int argc, const char * argv[])
{
    printf("第一题\n");
    printf("阶乘:%lld\n",mul(5));
    printf("第二题\n");
    printf("质数:%d\n",isPrime(19));
    printf("第三题\n");
    //小九九
    print99Table();
    printf("第四题\n");
    //因式分解
    printPrimeNumber(90);
    printf("第五题\n");
    //打印菱形
    printString(11, '$', ' ');
    
    printf("第六题\n");
    //打印金字塔
    char ch;
    printf("请输入一个字符:\n");
    scanf("%c",&ch);
    
    printPyramid(ch);
    
    printf("第七题\n");
    printf("%d\n",reverseNumber(-123));
    printf("%d\n",reverseNumber2(-123));
    
    return 0;
}

