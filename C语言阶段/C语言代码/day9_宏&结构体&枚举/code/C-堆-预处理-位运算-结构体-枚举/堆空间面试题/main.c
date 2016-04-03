//
//  main.c
//  堆空间面试题
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

#include <string.h>
#include <stdlib.h>

char *creatStack(void) {
    char buff[256] = {};//定义数组 空间会在 creatStack 栈中
    strcpy(buff, "xiaohong");
    return buff;//这时返回 是有问题的，函数返回，函数栈就会释放，这个buff数组 就没了释放掉了
}

char * creatHeap(void) {
    //malloc 申请了一个堆空间 把地址赋给了指针变量p
    char * p = (char *)malloc(100*sizeof(char));
    if (!p) {//申请失败
        perror("malloc error");
        return NULL;
    }
    strcpy(p, "xiaohong");//把字符串 放入 指定堆空间
    return p;//p指向一个堆空间 堆空间的释放 需要程序员手动释放，堆不会伴随 函数栈的释放 而释放
}

int main(int argc, const char * argv[])
{
   
    char *ret = creatStack();//creatStack函数调用结束，函数creatStack 栈 就释放了，内部数组也释放了。ret 就是一个野指针。
    printf("ret:%s\n",ret);//不可预测 野指针

    //申请堆空间
    ret = creatHeap();//接收 内部堆空间地址
    //ret 指向申请的堆空间
    printf("ret:%s\n",ret);//xiaohong
    
    if (ret) {//用完堆空间记着释放
        free(ret);//这个时候堆空间才释放
        ret = NULL;
    }
    return 0;
}
