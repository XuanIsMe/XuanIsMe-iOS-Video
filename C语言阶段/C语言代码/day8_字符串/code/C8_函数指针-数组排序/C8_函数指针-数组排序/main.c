//
//  main.c
//  C8_函数指针-数组排序
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>


//要求既能够升序 又能降序，所以可以传指定的函数进入，那么就需要把参数定义成函数地址类型

//调用这个函数的时候，需要提供排序的准则：升序准则 或者降序准则

void sortedArray(int * arr,int n,int (*cmp)(int,int)){//数组首元素地址
    //冒泡
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            //传 ascend就调用ascend
            //传 desend就调用desend
            if (cmp(arr[j],arr[j+1])) {//arr[j] arr[j+1]
                //交换
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
void printArray(int * arr,int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);//*(arr+i)
    }
    printf("\n");
    return;
}

//提供一个升序准则
int ascend(int left ,int right) {
    //    if (left > right) {
    //        return 1;
    //    }else{
    //        return 0;
    //    }
    return left > right;
}
//如果要降序 那么就提供一个降序函数
int desend(int left, int right) {
    return left < right;
}


int main(int argc, const char * argv[]) {
    int a[5] = {2,31,3,454,233};
    //实现一个函数打印数组
    printArray(a, 5);
    
    //要求实现一个函数可以对一个数组进行升序或者降序排列
    sortedArray(a, 5,ascend);
    
    printf("排序:升序\n");
    printArray(a, 5);
    
    printf("降序\n");
    sortedArray(a, 5,desend);
    printArray(a, 5);
    
    
    return 0;
}
