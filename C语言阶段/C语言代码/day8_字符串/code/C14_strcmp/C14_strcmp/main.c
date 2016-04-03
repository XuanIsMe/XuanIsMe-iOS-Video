//
//  main.c
//  C14_strcmp
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 strcmp("hello","helwelcome");
 字符串比较函数:比较两个字符串的大小，依次比较相应字符的ASCII值
 //找到 不同的两个相应的字符 ，
 如果左边字符 > 右边字符 结束 返回 >0的数
 如果左边字符 < 右边字符 结束 返回 < 0的数
 只要对应的字符相等 继续比较下一个 知道遇到不相等或者比较结束
 //如果所有字符都相等 字符串相等 返回0
 */
#include <string.h>

int main(int argc, const char * argv[]) {
    const char *p1 = "hello";
    const char *p2 = "hworld";
    int ret = strcmp(p1, p2);// < 0
    printf("ret = %d\n",ret);
    
    printf("%d\n",strcmp("hello", "hallo"));// >0
    printf("%d\n",strcmp("hello", "hello"));//=0
    return 0;
}












