//
//  main.c
//  C3_*p++
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//cmd shift k -》清理 xcode 垃圾
int main(int argc, const char * argv[]) {
    /*
    int x = 3;
    long y = (long)&x;
    int * q = (int *)y;
    printf("*q:%d\n",*q);
    */
    int x = 3;
    printf("*&x = %d\n",*&x);//指针运算符(*) 后面 都是一个地址
    
    int a[5] = {11,22,33,44,55};
    int *p = a;
    printf("p = %p\n",p);
    *p++;// *(指针运算符) ++ -- & ! 优先级是一样的,这时要考虑右结合性,p和++结合
    //如果搞不定优先级 加()   *(p++)  (*p)++
    printf("p = %p\n",p);
    return 0;
}
