//
//  main.c
//  结构体语法2
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*定义结构体
struct 结构体类型名 {
    成员1;
    成员2;
    成员3;
};//分号
 */
struct Stu {
    int num;
    double score;
};

struct A {
    int a;
    char c;
    struct Stu x;//定义结构体的时候可以包含其他结构体类型
    //struct A y; //不能包含自己类型的成员(struct A还没实现，不能确定空间大小)
    struct A* node;//可以定义 指针类型的变量，64系统下 所有的指针 都是 8字节大小，当前这个结构体类型 是可以确定空间大小的，
};






int main(int argc, const char * argv[]) {
    
    struct Stu a;//定义结构体变量
    //结构体的初始化
    struct Stu b = {1,99.8};//初始化，所有的成员都要初始化 依次进行
    b.score = 100;//修改

    
    return 0;
}





