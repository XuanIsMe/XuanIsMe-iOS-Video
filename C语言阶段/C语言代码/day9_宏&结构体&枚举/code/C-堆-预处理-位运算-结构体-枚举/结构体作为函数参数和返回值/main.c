//
//  main.c
//  结构体作为函数参数和返回值
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>

typedef struct Stu {
    int num;
    double score;
}MyStu;
//实现一个函数打印结构体内容
void printStruct(MyStu stu) {
    printf("num:%d\n",stu.num);
    printf("score:%f\n",stu.score);
}
MyStu makeStu(int newNum,double newScore) {
    MyStu stu;
    stu.num = newNum;
    stu.score = newScore;
    return stu;//结构体 可以作为函数返回值
}
int main(int argc, const char * argv[]) {
    MyStu x = {1,100};
    printStruct(x);
    
    MyStu y = makeStu(2,99.9);
    printStruct(y);
    
    printStruct(makeStu(3, 99.8));
    
    return 0;
}







