//
//  main.c
//  枚举
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
typedef struct Stu {
    int num;
    int sex;
} MyStu;
 */
#if 0
//定义一个枚举  enum Sex 类型
enum Sex {
    Male,   //逗号结束
    FeMale
};
typedef enum Sex Sex;//给 enum Sex  换个名字 Sex
#else
//方式2
typedef enum Sex {
    Male,   //逗号结束 //0
    FeMale//1
}Sex;
//枚举常量 都是 整型数字 默认 枚举常量 从第一个开始 是0 依次+1


#endif
//一旦 定义枚举类型 那么 这个类型 和里面的枚举常量Male FeMale就可以直接用


typedef struct Stu {
    int num;
    Sex sex;//enum Sex sex;
} MyStu;

//枚举的功能:增强代码的可读性
int main(int argc, const char * argv[]) {
    MyStu xiaohong1 = {1,0};
    
    MyStu xiaohong = {1,Male};
    printf("Male:%d\n",Male);
    return 0;
}



