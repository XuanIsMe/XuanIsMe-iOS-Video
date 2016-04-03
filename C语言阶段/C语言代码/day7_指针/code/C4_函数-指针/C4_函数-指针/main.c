//
//  main.c
//  C4_函数-指针
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 指针与函数
 
 指针的功能：指针可以跨栈
 
 如：
	<1>.实现一个函数，修改main函数中的一个变量 a
 假如把main函数中的一个变量的值修改为0
 
	<2>.实现一个函数交换 两个变量的值
 
	<3>.回想scanf函数为什么要传变量的地址？
 */


void changeToZero(int * p) {
    //向这个函数内部传一个空间的地址 ，这个函数就可以通过指针操作这个指针指向空间。
    *p = 0;
}
//交换两个函数外面 变量的值
/*
 //错 不能交换 main函数中的x y
void swap(int m,int n) {
    //这里 交换的是 swap 中m 和n
    int tmp = m;
    m = n;
    n = tmp;
}*/

void swap(int * m,int * n) {
    //这里 交换的是 swap 中*m(m指向空间) 和*n(n指向的空间)
    int tmp = *m;
    *m = *n;
    *n = tmp;
}

int main(int argc, const char * argv[]) {
    int a = 10;
    //只要知道空间的地址 我们就可以操作这个空间
    printf("a = %d\n",a);
    changeToZero(&a);//把a空间的地址传给 函数内部
    printf("a = %d\n",a);
    
    int x = 3;
    int y = 5;
    //通过一个函数 把 x和y 的值交换了
    printf("x = %d y = %d\n",x,y);
    swap(&x,&y);
    printf("swap_x = %d y = %d\n",x,y);
    return 0;
}








