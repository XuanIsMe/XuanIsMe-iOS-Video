//
//  main.c
//  结构体
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/*
 存放一个学生信息
 姓名
 学号
 成绩
 
 我们可以使用结构体来存储
 //结构体 就是 不同数据类型之间的集合
 结构体 可以 把多个信息作为一个整体进行描述
 */

//结构体类型 需要自定义(和之前用的int long double char 等等类型 类似)

//结构体 就是 不同数据类型之间的集合
//定义一个结构体类型
//struct Student就是一个新的类型名,比之前的int long 等系统自带类型复杂
struct Student {
    char name[30];//成员1
    int num;//成员2
    double score;
}; //分号结束

//自定义的类型 一般 都在 函数外面(文件的最上方/头文件)
/*
 1.怎么定义结构体类型
 2.怎么定义结构体变量
 3.怎么访问结构体变量中的成员数据
 */

int main(int argc, const char * argv[]) {
    //类型 变量名;
    int age = 20;
    //定义结构体变量 xiaoming 一旦定义变量xiaoming 那么 就会再内存中开辟空间，空间有多大跟结构体成员有关
    struct Student xiaoming;
//    printf("sizeof:%lu\n",sizeof(struct Student));
    //访问结构体内部 成员 ---> 结构体变量名.成员名
    
    xiaoming.num = 1;
    xiaoming.score = 100;
   // xiaoming.name = "小明";//xiaoming.name 得到的是数组名name 是地址常量
    strcpy(xiaoming.name,"小明");//用strcpy 对字符数组拷贝
    
    printf("name:%s num:%d score:%f\n",xiaoming.name,xiaoming.num,xiaoming.score);
    
    return 0;
}






