//
//  main.c
//  C9_官方结构体
//
//  Created by LZXuan on 14-11-12.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#include <stdio.h>
//定义一个范围
//"helloworld" "llo"
//{2,3}
typedef struct range {
    int location;//
    int length;
} NSRange;

//typedef struct range NSRange;

//定义一个点
typedef struct point {
    float x;
    float y;
} CGPoint;

//定义一个大小
typedef struct size {
    float width;
    float height;
}CGSize;

//结构体可以作为函数的返回值
NSRange makeRange(int loc,int len) {
    NSRange range;
    range.location = loc;
    range.length = len;
    return range;
}


//定义一个矩形的位置 (包括左上角坐标和矩形的宽和高)

typedef  struct rect {
    CGPoint point;
    CGSize size;
} CGRect;




int main(int argc, const char * argv[])
{
    NSRange range = {1,3};
    printf("loc:%d len:%d\n",range.location,range.length);
    
    CGPoint point = {0,0};
    printf("x:%f y:%f\n",point.x,point.y);
    CGRect frame = {{0,0},{100,100}};
    CGRect frame2 = {0,0,100,100};
    
    NSRange range3 = makeRange(1, 10);
    
    return 0;
}

