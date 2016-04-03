//
//  main.c
//  枚举2
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//轩是Me-轩哥分享群544254498

#include <stdio.h>
//定义一个枚举类型 表示 七种颜色
typedef enum Color {
    Red,   //0
    Orange,//1
    Yellow,//2
    Green,//3
    Blue,//4
    Cyan,//5
    Pur//6
}Color;
//实现一个函数 传入一个数字打印颜色
void printColor(Color color) {
    switch (color) {
        case Red:
            printf("红色\n");
            break;
        case Orange:
            printf("橙色\n");
            break;
        case Yellow:
            printf("黄色\n");
            break;
        case Green:
            printf("绿色\n");
            break;
        case Blue:
            printf("蓝色\n");
            break;
        case Cyan:
            printf("青色\n");
            break;
        case Pur:
            printf("紫色\n");
            break;

        default:
            break;
    }
}
//其他语法
enum Num {
    A = 1,
    B,
    C = 6,
    D,
    E,
    F
};

enum xxx {
    AA = 0,
    BB = 1 << 0,//1
    CC = 1 << 1,//2
    DD = 1 << 2,//4
    EE = 1 << 3,//8
};



int main(int argc, const char * argv[]) {
    printColor(Red);
    printColor(Orange);
    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
    printf("%d\n",D);
    printf("%d\n",E);
    printf("%d\n",F);
    return 0;
}
