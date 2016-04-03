//
//  main.c
//  C1_二维数组练习
//
//  Created by lzxuan on 15/12/28.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 1.
 打印
 1000
 0100
 0010
 0001
 
 打印
 0001
 0010
 0100
 1000
 打印
 1001
 0110
 0110
 1001
 
 
 2.编写函数将一个n*n矩阵转置，例如：（****）
 1 2 3 4     1 5 3 4
 5 6 7 8 ->  2 6 2 7
 3 2 5 9     3 7 5 2
 4 7 2 3     4 8 9 3
 
 3.
 杨辉三角  输入n打印一个n行的杨辉三角
 假设输入7行
 
 1
 1 1
 1 2  1
 1 3  3  1
 1 4  6  4  1
 1 5 10 10  5 1
 1 6 15 20 15 6 1
 
 
 */

void test1(void) {
    int a[4][4] = {};
    
    for (int i = 0; i < 4; i++) {
        a[i][i] = 1;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return;
}

void test2(void) {
    int a[4][4] = {};
    
    for (int i = 0; i < 4; i++) {
        a[i][3-i] = 1;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}

void test3(void){
    int a[4][4] = {};
    
    for (int i = 0; i < 4; i++) {
        a[i][3-i] = 1;
        a[i][i] = 1;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void test4(void) {
    int a[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 4; i++) {
        //只需要遍历 矩阵的右上角
        for (int j = i+1; j < 4; j++) {
            int tmp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
    }
    
    printf("转置之后\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
}

void printYangTriangle(int n) {
    int a[256][256] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0||i == j) {
                a[i][j] = 1;
            }else {
                //== 上一行的前一列 + 上一行当前列
                a[i][j] = a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    
    
}


int main(int argc, const char * argv[])
{
    
    test1();
    test2();
    test3();
    test4();
    printYangTriangle(7);
    return 0;
}