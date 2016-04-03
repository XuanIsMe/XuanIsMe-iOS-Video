//
//  main.c
//  C11_全局变量
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//全局变量：在函数外面声明的变量就是全局(我们一般把全局变量定义在一个源码文件的最上方)->全局变量的数据 整个程序 所有文件 共享。
/*
 作用域: 整个程序 所有文件 都可以 使用，数据是共享
 内存布局:数据段 (数据段和栈 是独立 不会伴随栈的释放而释放,数据段的空间只有程序结束的时候才会释放)
 声明周期:从程序运行 开始 到程序运行结束
 */
//int cnt = 0; 全局变量 不初始化 默认就是0
int cnt;

void func(void) {
    cnt++;
    printf("func_cnt:%d\n",cnt);
}
/*
 XXXX
 XXXX栈段
 ----
 XXXX
 XXXX
 XXXX堆段
 ----
 XXXX
 XXXX数据段
 XXXX
 XXXX全局变量会在数据段开辟空间 跟其他空间没有关系
 XXXX
 XXXX
 XXXX
 -----
 XXXX代码段
 XXXX
 XXXX
 */


int main(int argc, const char * argv[]) {
    printf("main_cnt1 = %d\n",cnt);//0
    func();//1
    printf("main_cnt2 = %d\n",cnt);//1
    return 0;
}






