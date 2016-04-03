//
//  main.c
//  C5_scanf
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    <3>.回想scanf函数为什么要传变量的地址？
    int num;
    //scanf 功能就是从键盘接收一个数据 然后把scanf外面的变量num空间的值 进行修改
    scanf("%d",&num);
    
    printf("num:%d\n",num);
    
    return 0;
}





