//
//  main.c
//  C10_atoi
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 atoi();
 把一个整型的 数字串 转化为整数
 
 atoi 将一个字符串转成一个整数，从最前面开始，如果有空格，则跳过空格，直到第一个非空格字符，开始转换.如果这个字符是'+'或'-'，则会转换为正／负数，继续，直到非数字字符，结束转换!
 //转换数字串
 */
#include <stdlib.h>
//int	 atoi(const char * a)


int main(int argc, const char * argv[]) {
    //把一个 满足要求的数字串 转化为 一个真正的数字 通过返回值 返回
    
    int num = atoi("123");
    printf("num:%d\n",num);
    
    printf("%d\n",atoi("0"));//0
    printf("%d\n",atoi("+123"));//123
    printf("%d\n",atoi("-123"));//-123
    printf("%d\n",atoi("   -123"));//-123
    printf("%d\n",atoi("-   123"));//0
    printf("%d\n",atoi("a123"));//0
    printf("%d\n",atoi("a-123"));//0
    printf("%d\n",atoi("123a123"));//123
    printf("%d\n",atoi("hello"));//0
    
    
    return 0;
}






