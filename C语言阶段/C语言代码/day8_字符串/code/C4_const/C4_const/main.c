//
//  main.c
//  C4_const
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    const int a = 3;
//    a = 1;  a 是一个 用const 修饰的常量  不能改
    int b = 3;
    
    //*前 const
    const int * p = &b;
    //修饰的是 代码中 *p 不能修改
    //在 代码中不能出现 *p = xxxx;
    int b2 = 4;
    p = &b2;
//    *p = 10; //
    b = 10;
    
    //也是 修饰的是 代码中 *p1 不能修改
    int const * p1 = &b;
    //*p1 = 2;
    ////////////// *后const ///////////////////
    //修饰的是 代码中 p2 不能修改
    //代码中 不能出现 p2 = xxx;
    int * const p2 = &b;
//    p2 = &b2;
    *p2 = 10;
    //两个const 修饰 *p3 和 p3都不能改
    const int * const p3 = &b;
//    *p3 = 1;
//    p3 = &b2;
    
    
    return 0;
}









