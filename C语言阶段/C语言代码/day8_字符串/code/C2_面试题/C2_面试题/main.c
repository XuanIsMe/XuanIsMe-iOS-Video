//
//  main.c
//  C2_面试题
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

void func(char c[100]) {
    //这里传的是int *c  是一个指针
    printf("%lu\n",sizeof(c));//8
}

int main(int argc, const char * argv[])
{
    
    //|XXXX|XXXX|XXXX|XXXX|XXXX|
    //  a[0]a[1]  a[2] a[3] a[4]
    int a[5] = {3,10,28,9,5};
    int * p = (int *)(&a+1);
    p--;
    printf("*p = %d\n",*p);//5
    printf("p[0] = %d\n",p[0]);//*p = 5
    //p[i]<=>*(p+i)
    return 0;
}






