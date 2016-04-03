//
//  main.c
//  typedef面试题
//
//  Created by lzxuan on 16/1/4.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#include <stdio.h>

typedef char *  PCHAR;

#define CHAR char *


int main(int argc, const char * argv[])
{
    PCHAR x,y;//x是 PCHAR y也是 PCHAR
    
    CHAR m,n;//char * m,n;//m 是char * n是char
    
    
    printf("siezof(x):%lu\n",sizeof(x));//8
    printf("siezof(y):%lu\n",sizeof(y));//8
    printf("siezof(m):%lu\n",sizeof(m));//8
    printf("siezof(n):%lu\n",sizeof(n));//1
    
    return 0;
}

