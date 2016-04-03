//
//  main.c
//  C13_静态变量
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

static int x;//static 修饰的全局变量，作用域 在从声明开始 到包含这个静态全局变量的文件结束 出了当前文件 就不能用了。

/*
 用static 修饰的变量 叫 静态变量
 
                    作用域      内存布局      声明周期
   静态局部变量
 和静态全局变量

 
 
 static 修饰 函数  -》静态函数
 */
void func(void) {
    int a = 3;//在 func 栈 开辟空间
    a++;
    printf("%d\n",a);
    //printf("adr'%p\n",&a);
}

/*
 静态变量 都在 数据段 存储 
 数据段的空间 不会伴随栈的释放而释放
 生命周期:数据段从 程序运行开始创建 到 程序运行结束
 */
void func2(void) {
    static int cnt = 3;//作用域:(使用范围)从声明开始到包含它的{}结束
    //上面 static int cnt = 3; 这句话 只在编译代码的(编译时)时候运行一次,而且在数据段开辟一个空间
    
    cnt++;
    printf("cnt:%d\n",cnt);
    //printf("adr'%p\n",&cnt);
}

int main(int argc, const char * argv[]) {
//    cnt;
    
    func();//4
    func();//4
    func();//4
    
    func2();//4
    func2();//5
    func2();//6
    x++;
    printf("x:%d\n",x);
    return 0;
}





