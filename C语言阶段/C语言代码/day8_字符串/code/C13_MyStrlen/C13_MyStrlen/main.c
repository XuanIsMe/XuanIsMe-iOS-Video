//
//  main.c
//  C13_MyStrlen
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
unsigned long myStrlen(const char *s);
unsigned long myStrlen(const char *s) {
    //s 指向的字符串 就是我们要统计的
    unsigned long cnt = 0;
    for (int i = 0; s[i] != '\0';i++ ) {
        cnt++;
    }
    return cnt;
}

unsigned long myStrlen2(const char *s);
unsigned long myStrlen2(const char *s) {
    //s 指向的字符串 就是我们要统计的
    unsigned long cnt = 0;
    //hello
    while (*s) {
        cnt++;
        s++;//指针右移
    }
    return cnt;
}


int main(int argc, const char * argv[]) {
    
    printf("%lu\n",myStrlen("hello"));
    printf("%lu\n",myStrlen2("hello"));
    return 0;
}
