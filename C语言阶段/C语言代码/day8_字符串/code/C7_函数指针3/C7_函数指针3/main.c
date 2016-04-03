//
//  main.c
//  C7_函数指针3
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//四则运算
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int myDiv(int a,int b);

int add(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}
int myDiv(int a,int b) {
    //不考虑 b 为0
    return a/b;
}

//要求实现一个函数 可以进行 上面的四则运算
//我们可以 把上面四个函数的地址 传入 就可以直接进行四则运算
int mycalculation(int a,int b,int (*p)(int,int)) {
    return p(a,b);
}


int main(int argc, const char * argv[]) {
    
    printf("%d\n",mycalculation(100,2,add));
    printf("%d\n",mycalculation(100,2,sub));
    printf("%d\n",mycalculation(100,2,mul));
    printf("%d\n",mycalculation(100,2,myDiv));
    return 0;
}











