//
//  main.c
//  C1_汉诺塔
//
//  Created by LZXuan on 14-11-5.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#include <stdio.h>
/*
 有三根柱子，要求把n个大小不同的盘子从a柱子移动到c柱子上
 条件1.每次只能移动一个盘子
    2.小盘子必须只能在大盘子上
 实现一个函数:要求打印出移动盘子的过程
 
 A B C表示三个柱子
 */
int cnt = 0;//全局变量统计 次数

//把n个盘子从 第一个参数借助第二个参数移动到第三个参数
void hanno(char a,char b, char c,int n) {
    if (n == 1) {//极限值 移动一个盘子
        printf("%c-->%c\n",a,c);//打印过程
        cnt++;
        return;//返回
    }
    //找移动n个盘子和移动n-1个盘子的关系
    //用 hanno(...n-1)来表示 移动n个盘子
    
    //先移动n-1个盘子借助第c柱子从a柱子移动到b柱子
    hanno(a,c,b,n-1);
    //把剩下的一个 从a柱子移动到c柱子
    //(移动一个盘子不用第二个参数)
    hanno(a,0,c,1);
    //把n-1个盘子从b上借助柱子a移动柱子c
    hanno(b,a,c,n-1);
    return;
}


int main(int argc, const char * argv[]) {
    hanno('A','B','C',20);
    printf("cnt:%d\n",cnt);
    return 0;
}



