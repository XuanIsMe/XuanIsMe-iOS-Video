//
//  main.c
//  Malloc
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>
//malloc
int main(int argc, const char * argv[]) {
#if 0//用条件编译 注释代码
    
    //堆空间
    //申请堆空间 需要 手动调用 malloc
    int n;
    scanf("%d",&n);
    //从键盘 输入 指定字节大小
    
    //int a; a = 3;
    //在堆空间 开辟n个字节
    //void * 表示通配型指针 泛型指针
    char *p = (char *)malloc(n);
    //char a[100]  = {};
    printf("p:%p\n",p);
    *p = 'A';
    *(p+1) = 'B';
    p[0] = 'A';
    free(p);//释放
#endif
   
    //在栈段 申请 int 4字节空间
    int a ;
    a = 4;
    //malloc(4);//申请的堆空间 没有名字是一个匿名空间，这时候我们要想操作堆空间 只能通过空间地址
    //在堆空间申请4字节 int 空间
    
    //malloc(4) 最好写成 malloc(sizeof(int))
    //下面 malloc 返回的最好强转
    //手动申请
    int *pInt = (int *)malloc(sizeof(int));
    if (pInt == NULL) {//检测是否申请失败，失败返回NULL
        printf("malloc failed!\n");
        return -1;//
    }
    //上面申请成功那么才可以使用
    *pInt = 100;
    printf("*pInt = %d\n",*pInt);
    //用完之后要释放
    if (pInt != NULL) {//规范释放形式 可以避免多次释放
        free(pInt);
        pInt = NULL;
    }
    
    char c = 'A';//在栈段 申请一个char 1字节空间
    
    //在堆段怎么申请
    char *pChar = (char *)malloc(sizeof(char));
    if (pChar == NULL) {
        printf("malloc failed!\n");
        return -1;
    }
    *pChar = 'X';
    printf("*pchar = %c\n",*pChar);
    //什么时候用完什么时候释放
    //什么时候用什么时候申请
    if (pChar != NULL) {
        free(pChar);
        pChar = NULL;
    }
    
    
    double f = 3.14;//在栈段 申请一个double 空间
    
    //在堆段怎么申请
    double *pDouble = (double *)malloc(sizeof(double));
    if (pDouble == NULL) {
        printf("malloc failed!\n");
        return -1;
    }
    *pDouble = 3.1415926;
    printf("*pDouble = %f\n",*pDouble);
    //什么时候用完什么时候释放
    //什么时候用什么时候申请
    if (pDouble != NULL) {
        free(pDouble);
        pDouble = NULL;
    }
    
    //在栈段 申请一个 256个int类型的数组空间
    int buff[256] = {};
    buff[0] = 1;
    buff[1] = 2;
    
    //在堆段怎么申请
    //返回 这个空间的第一个字节的地址
    int *pBuff = (int *)malloc(sizeof(int)*256);
    //这时我们可以向操作数组 一样操作 这个堆空间
    //pBuff就相当于 数组的首元素的地址
    if (pBuff == NULL) {
        printf("malloc failed!\n");
        return -1;
    }
    *pBuff = 1;
    *(pBuff+1) = 2;
    printf("pBuff[0] = %d\n",pBuff[0]);
    printf("pBuff[1] = %d\n",pBuff[1]);
    //指针 最好不要做自增++
    //用完释放
    if (pBuff != NULL) {
        free(pBuff);//pBuff必须是当时申请返回的第一个字节的地址
        pBuff = NULL;
    }
    
    
    return 0;
}











