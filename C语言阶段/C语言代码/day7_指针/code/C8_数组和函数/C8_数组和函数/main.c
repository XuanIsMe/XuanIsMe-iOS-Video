//
//  main.c
//  C8_数组和函数
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

//实现一个函数 专门打印 函数外的一个数组
/*
 //不推荐
void printArray(int p[],int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n",p[i]);
    }
}
 */

//函数内部 要操作 外面的整个数组就可以直接传 数组的首元素地址

void printArray(int *p,int n) {
    for (int i = 0; i < n; i++) {
        //printf("%d\n",p[i]);
        printf("%d\n",*(p+i));
    }
}
//下面的写法 不推荐 大家使用
//函数参数中的int p[] ;实际是一个指针，不是数组,指针编译器允许 写成int p[].
//
void printArray2(int p[100],int n) {
    printf("sizeof(p) = %lu\n",sizeof(p));//8
    for (int i = 0; i < n; i++) {
        printf("%d\n",p[i]);
    }
}

int main(int argc, const char * argv[]) {
    int a[5] = {1,2,2,3,4};
    printArray(a,5);
    printArray2(a, 5);
    
    return 0;
}






