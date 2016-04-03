//
//  main.c
//  MyStrcmp
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

//"helloqqqq"  "hewwww"
//"hello" "hello"
//"helloworld" "hello"
int myStrcmp(const char * s1,const char * s2){
    //遍历字符串 进行相应地字符比较
    while (*s1 != '\0'&&*s2 != '\0') {//*s1和*s2都不等于\0进行比较
        if (*s1 != *s2) {
            break;
        }
        s1++;//右移
        s2++;//右移
    }
    return *s1-*s2;
}

int myStrcmp2(const char * s1,const char * s2){
    //遍历字符串 进行相应地字符比较
    while (*s1 != '\0'&&*s2 != '\0'&&(*s1 == *s2)) {//*s1和*s2都不等于\0进行比较
        s1++;//右移
        s2++;//右移
    }
    return *s1-*s2;
}



/*
 过程：
 依次比较s1和s2指向的字符串中对应字符ASCII值，当两个对应的字符ASCII相等那么继续比较，直到遇到不相等的结束比较返回
 如果 s1对应的字符ASCII值大 那么返回 >0 如果s1对应的字符ASCII值比S2小那么返回<0 如果两个字符串中所有的字符都相等返回 0
 */

int main(int argc, const char * argv[])
{
    printf("%d\n",myStrcmp("hello", "hello"));
    printf("%d\n",myStrcmp("hellow", "hello"));
    printf("%d\n",myStrcmp("helloaa", "helloww"));
    
    
    printf("%d\n",myStrcmp2("hello", "hello"));
    printf("%d\n",myStrcmp2("hellow", "hello"));
    printf("%d\n",myStrcmp2("helloaa", "helloww"));
    return 0;
}

