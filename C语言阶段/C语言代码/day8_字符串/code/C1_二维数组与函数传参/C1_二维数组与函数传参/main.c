//
//  main.c
//  C1_二维数组与函数传参
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

void printArray2(int (*p)[3],int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            //printf("%d ",p[i][j]);//访问二维数组元素的元素
            //*(p+i)<=>p[i]
            //p[i][j] => *(p+i)[j] => *(*(p+i)+j)
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    return;
}

int main(int argc, const char * argv[])
{
    int a[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    
    //实现一个函数打印二维数组
    //对于数组传参而言，数组不能整体赋值，跨函数操作数组所有元素，那么只需要传数组的首元素地址
    //二维数组首元素a[0]
    //首元素地址&a[0]
    //数组名就是首元素地址 a《=》&a[0]
    //首元素类型 是 int [3]
    //首元素地址类型：&a[0]的类型--->int (*)[3]
    
    
    printArray2(a,2);
    
    
    
    return 0;
}
