//
//  main.c
//  Typedef
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>
//描述 一辆 汽车的信息
struct Car {
    char name[30];
    int color;//颜色
    double speed;//速度
};
//可以 重新 给struct Car 类型 定义一个新的名字

//typedef 旧的类型 新的类型名;

typedef struct Car MyCar;
//理解:给 truct Car  类型 起个 别名 MyCar
//或者 重新定义了一个新的类型 MyCar (就是struct Car)




int main(int argc, const char * argv[]) {
    
    struct Car BMW = {"BMW",1,200};
    
    //定义结构体变量 MyCar
    MyCar BenChi;
    
    
    return 0;
}









