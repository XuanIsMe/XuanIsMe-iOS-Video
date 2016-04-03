//
//  main.c
//  C18_字符串分割Strtok
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
/*
 
 strtok 字符串分割
 
 1.strtok 每次调用只能分割出一个单词 返回单词地址
 2.返回值就是分割出的单词地址，如果不能再分割返回NULL
 3.strtok 的参数:
 //第一个参数指向的空间要能改
 第一个参数:第一次传的是要分割的字符串地址，第二次开始要传NULL
 第二个参数:分割条件 以字符串中的字符进行分割
 4.分割一次那么就会修改一次字符数组的内容把出现的分割条件改为\0
 
 */

#include <string.h>

int main(int argc, const char * argv[]) {
    char c[] = "Yes,I am a good     man";
    //第一个参数 必须是字符串的首元素地址
    
    //第一次调用
    //第一个参数传入 字符数组的首元素地址
    // 第二个参数 写分割条件
    char *ret = strtok(c, " ,");//按照 字符串" ,"中的空格或者逗号把字符数组的字符串进行分割
    printf("ret = %s\n",ret);
    //下面要继续调用strtok(调用一次函数只能分割出一个单词)
    while (1) {
        //从第二次调用开始第一个参数传NULL
        ret = strtok(NULL, " ,");
        if (ret == NULL) {
            break;//当 没有单词可分割的时候 strtok 返回NULL就可以结束
        }
        printf("ret = %s\n",ret);
    }
    printf("c:%s\n",c);
    printf("c+4:%s\n",c+4);
    printf("c+6:%s\n",c+6);
    printf("c+9:%s\n",c+9);
    printf("c+11:%s\n",c+11);
    printf("c+16:%s\n",c+16);
    //最后把分割条件 换成\0
    //数组c 中Yes\0I\0am\0a\0good\0    man
    
    
    return 0;
}





