//
//  main.c
//  C7_指针和数组
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    

    
    
    int a[5] = {1,2,3,4,5};
    printf("a[0] = %d\n",a[0]);
    printf("a[1] = %d\n",a[1]);
    printf("a[2] = %d\n",a[2]);
    printf("a[3] = %d\n",a[3]);
    printf("a[4] = %d\n",a[4]);
    /*
      a[0] a[1] a[2] a[3] a[4]
     |XXXX|XXXX|XXXX|XXXX|XXXX|
     */
    
    //&a[0] 首元素地址
    //int *p = &a[0];
    //
    int *p = a;//p指向的数组中的首元素，不是整个数组
    printf("*p = %d\n",*p);//*p就是p指向的空间a[0]
    printf("*(p+1) = %d\n",*(p+1));//a[1]
    printf("*(p+2) = %d\n",*(p+2));
    printf("*(p+3) = %d\n",*(p+3));
    printf("*(p+4) = %d\n",*(p+4));//a[4]
    
    
    printf("*(&a[0]) = %d\n",*(&a[0]));
    printf("*(&a[0]+1) = %d\n",*(&a[0]+1));//a[1]
    printf("*(&a[0]+2) = %d\n",*(&a[0]+2));
    printf("*(&a[0]+3) = %d\n",*(&a[0]+3));
    printf("*(&a[0]+4) = %d\n",*(&a[0]+4));//a[4]
    
    //数组名 a是一个地址常量
    //C语言规定:数组名 a是数组的首元素地址 &a[0]
    printf("a = %p\n",a);
    printf("&a[0] = %p\n",&a[0]);
    
    printf("*(a) = %d\n",*(a));
    printf("*(a+1) = %d\n",*(a+1));//a[1]
    printf("*(a+2) = %d\n",*(a+2));
    printf("*(a+3) = %d\n",*(a+3));
    printf("*(a+4) = %d\n",*(a+4));//a[4]
    
    //前提 int *p = a;
    //p[i]<=>   a[i]《=》*(p+i)<=>*(a+i)
    // 获取数组元素 格式 数组首元素地址[索引];
    
    printf("p[0] = %d\n",p[0]);
    printf("p[1] = %d\n",p[1]);
    printf("p[2] = %d\n",p[2]);
    printf("p[3] = %d\n",p[3]);
    printf("p[4] = %d\n",p[4]);
    
    /*
    int b = 1000;
    int *q = &b;
    printf("q[0] = %d\n",q[0]);
    */
    //*(p+i) <-> p[i]
    
    
    /*
     a[0] a[1] a[2] a[3] a[4]
     |XXXX|XXXX|XXXX|XXXX|XXXX|
     */
    int *x = &a[2];
    printf("x[0] = %d\n",x[0]);//*x->a[2]
    
    //&a[0]  a  &a是什么？
    //&a[0]  a 规定是数组的首元素地址
    //C语言规定:&a数组整个空间的地址
    
    printf("a = %p\n",a);
    printf("&a[0] = %p\n",&a[0]);
   
    printf("&a = %p\n",&a);
    //&a+1 加的是 整个数组的空间大小
    printf("&a+1 = %p\n",&a+1);
    
    //数组的类型是int [5];数组的空间 地址类型 就是 int (*)[5]
    int (*pp)[5] = &a;//正确
    
    return 0;
}





