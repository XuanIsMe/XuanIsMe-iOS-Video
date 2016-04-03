//
//  main.c
//  C16_Strcat
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
#include <string.h>



int main(int argc, const char * argv[]) {
    //字符串 拼接 ，把第2个字符串拼接到第一个后面
    //第一个参数 必须是 字符数组的首元素地址
    //第一个参数表示的数组 要足够大
    char c[256] = "hello";
    char *ret = strcat(c, "world");
    //返回的是 数组c的首元素地址
    printf("ret = %s\n",ret);//helloworld
    printf("c:%s\n",c);//helloworld
    
    char cArr[256] = "I";
    char *p1 = "am";
    char *p2 = "a";
    char *p3 = "good";
    char *p4 = "man!";
    //"I am a good man!"
    strcat(cArr, " ");
    strcat(cArr, p1);
    strcat(cArr, " ");
    strcat(cArr, p2);
    strcat(cArr, " ");
    strcat(cArr, p3);
    strcat(cArr, " ");
    strcat(cArr, p4);
    printf("%s\n",cArr);
    
    return 0;
}








