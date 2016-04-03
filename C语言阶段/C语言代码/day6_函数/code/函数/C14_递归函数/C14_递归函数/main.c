//
//  main.c
//  C14_递归函数
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 递归:自己调用自己的函数
 1.找临界值/极限值(函数结束退出条件)
 2.假设当前函数已经实现可以调用
 3.找第n次和第n-1次的关系(找当前这次和上一次 的关系或者下一次的关系)
 
 循环 能够解决的问题 一般递归函数也能解决，但是递归能解决的问题，循环不一定能解决
 //递归主要解决数学推理问题。
 */
/*
练习
1.求和:1+2+3...+n;
2.求阶乘n!
思考题:
汉诺塔问题:
已知:有三根柱子 A B C . A柱子上有N个盘子，要求把这N个盘子从A可以借助柱子B移动到柱子C上

要求1.这个N个盘子大小不同，必须是小盘子在大盘子上面
2.每次只能移动一个盘子
 
 输出 移动盘子的移动轨迹
 */

/*
 下面的 递归函数 没有结束 会无限自己调用自己下去
void test(void) {
    printf("test\n");
    test();
}*/
//用循环实现 求和
int func(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
/*
 1.找临界值/极限值(函数结束退出条件)
 2.假设当前函数已经实现可以调用
 3.找第n次和第n-1次的关系(找当前这次和上一次 的关系或者下一次的关系,用函数调用来表示)
 */
//用递归函数实现
//1+..+n
int sumOfNumber(int n) {
    if (n == 1) {//1就是临界值
        return 1;//临界值 返回
    }
    //sumOfNumber(n) ->sumOfNumber(n-1)+n
    //当前函数 返回值 就是sumOfNumber(n)的值
    return sumOfNumber(n-1)+n;
}
//sumOfNumber(3)-->return sumOfNumber(2)+3 ->return sumOfNumber(1)+2+3->return 1+2+3;

//求n的阶乘
//
int mul(int n) {
    if (n == 0) {//0!--》是1
        return 1;//
    }
    return mul(n-1)*n;
}

//中途结束函数 必须用return

//打印n个helloworld
void printHelloWorld(int n) {
    //找极限值 结束
    if (n == 1) {
        printf("helloworld!\n");
        return;//这里 不能省去 //n=1函数要返回结束
    }
    printHelloWorld(n-1);//先打印n-1个
    printf("helloworld!\n");//最后再打1个
    
}

int main(int argc, const char * argv[]) {
    printf("%d\n",sumOfNumber(3));
    printf("%d\n",sumOfNumber(100));
    printf("%d\n",mul(5));
    
    printHelloWorld(10);
    return 0;
}



