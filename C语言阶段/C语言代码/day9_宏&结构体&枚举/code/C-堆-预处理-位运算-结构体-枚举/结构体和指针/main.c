//
//  main.c
//  结构体和指针
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>
#if 0
struct Stu {
    int num;
    double score;
};
typedef struct Stu MyStu;
#else
//换一种 方式定义 结构体
//和上面 是一样的
typedef struct Stu {
    int num;
    double score;
} MyStu;

#endif



int main(int argc, const char * argv[]) {
    int age = 25;
    int  *p = &age;
    printf("age = %d\n",*p);
    
    struct Stu x = {1,100};
    MyStu y = {2,99};
    struct Stu *pStu = &x;
    //或者
    MyStu *pStuY = &y;
    
    //*pStu--->指的就是 x
    printf("num:%d\n",(*pStu).num);//必须要加() .的优先级很高
    printf("score:%f\n",(*pStu).score);
    
    //直接用指针访问成员
    pStu->num = 11;
    pStu->score = 100;
    //结构体指针->成员名  访问结构体成员
    //结构体变量名.成员名
    printf("score:%f\n",pStu->score);
    
    
    
    return 0;
}



