//
//  main.c
//  C语言头文件多次被包含
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//先展开a.h 
#include "a.h"
//再展开b.h b.h中又有一个a.h
#include "b.h"

int main(int argc, const char * argv[]) {
    cnt = 1;
    b = 1;
    return 0;
}
