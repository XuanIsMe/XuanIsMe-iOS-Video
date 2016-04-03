//
//  main.c
//  C6_野指针
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 7.野指针
 
	使用指针注意野指针
 不知道指向哪个空间/指向非法的空间
 
 野指针:
	<1>.指向一个非法空间((不是当前程序申请的空间)比如系统占用的空间  其他程序)
	<2>.不知道指向哪里 int * p; *p = 2;
	<3>.free(p) free之后的指针指向的空间不能再使用（*p不能再使用）
 
 野指针造成的问题:
 
	不可预料
	不安全 危险
 如何避免这个问题：
 
 声明指针变量之后，一定要给指针变量赋一个合法的空间地址（合法空间：必须是当前程序申请的空间 int a; int * p = &a;//这个a就是一个合法空间）
 
 注意：只要使用指针变量一定要给这个指针变量赋一个合法的空间地址
 否则会造成段错误或者bus error
 

 */
int main(int argc, const char * argv[]) {
    /*
     野指针 p必须指向一个合法的申请的空间
    int * p;
    *p = 123;
    */
    //下面的地址 (int *)100 表示空间 没有向系统申请。
    
    /*//p 是野指针
    int * p = (int *)100;
    *p = 1;
    */
    /*
    int *p;
    scanf("%d",p);
    */
    
    int a = 3;
    int * p = &a;//p指向的就是一个合法的空间
    *p = 5;
    
    int x;
    int * q = &x;
    //scanf("%d",&x);
    scanf("%d",q);
    return 0;
}




