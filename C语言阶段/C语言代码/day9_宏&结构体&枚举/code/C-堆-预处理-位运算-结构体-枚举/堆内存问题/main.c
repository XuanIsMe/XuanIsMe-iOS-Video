//
//  main.c
//  堆内存问题
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *p = (int *)malloc(sizeof(int));
    if (p == NULL) {
        printf("error\n");
        return -1;
    }
    /*
    if (p != NULL) {
        free(p);
        p = NULL;
    }*/
    
    //没有释放 忘记释放 --》内存泄露(只要内存占着不用就是泄露，2，内存一直在飙升)；
    int *p2 = (int *)malloc(sizeof(int));
    if (p2 == NULL) {
        printf("error\n");
        return -1;
    }
    
    free(p2);
    
    /*
    free(p2);//多释放 可能 崩溃
    free(p2);
    */
    
    int *p3 = (int *)malloc(sizeof(int));
    if (p3 == NULL) {
        printf("error\n");
        return -1;
    }
    int *p4 =p3;
    
    free(p3);// 下面还用，过早释放 不可预测
    
    //*p4 = 1;
    
    
    
    /*
     过早释放 可能 崩溃 不可预测
     */
    return 0;
}











