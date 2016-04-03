//
//  main.c
//  C15_strcpy
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char c[256] = {};
    //c = "helloworld"; 错 ->c是数组名 是常量
    //字符数组的赋值 需要对数组的每一个元素一次的进行拷贝
    
    //把一个字符串拷贝 到 一个字符数组中
    char *ret = strcpy(c, "helloworld!");
    printf("ret = %s\n",ret);
    printf("c = %s\n",c);//打印字符串 用%s  一次打印字符遇到\0结束打印
    /*
     char *ret = strcpy(s1,s2);
     //拷贝字符串函数:依次从s2表示的字符串中进行拷贝遇到\0结束。
     
     把源字符串s2 拷贝到s1 表示的空间中
     //s1实际上必须是一个字符数组(可变)，而且要足够大。
     */
    
    
    
    return 0;
}





