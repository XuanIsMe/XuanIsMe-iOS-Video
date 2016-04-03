//
//  main.c
//  C3_指针的运算
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //指针可以做哪些运算？？可以与整数做加减运算 不能做乘除求余运算
    
    int a = 3;
    int *p = &a;
     printf("p= %p\n",p);
    printf("p+1= %p\n",p+5);//指针+1 加的是 指针指向的空间大小
    //p+n ---》加  sizeof(*p)*n
    
    char c = 'a';
    char *pChar = &c;
    printf("pChar= %p\n",pChar);
    printf("pChar+1= %p\n",pChar+1);//加上 pChar 指向的一个char空间大小
    
    long b = 100;
    long *pLong = &b;
    printf("pLong= %p\n",pLong);
    printf("pLong+1= %p\n",pLong+1);//加上 pLong 指向的一个long空间大小
        //+ sizeof(*pLong)
    
    long *newPLong = &b+1;
    
    printf("%lu\n",newPLong-pLong);
    //相同类型的指针之间 只可以进行 减法运算 --》结果 是两个门牌号相差多少个空间
    //指针之间 相减得到 :步长
    
    
    
    return 0;
}



