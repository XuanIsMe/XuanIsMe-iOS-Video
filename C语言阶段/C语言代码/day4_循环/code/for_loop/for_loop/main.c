//
//  main.c
//  for_loop
//
//  Created by lzxuan on 15/12/24.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//main 函数 是程序入口
int main(int argc, const char * argv[]) {
    //从main 函数的第一句 开始执行
    for (int i = 0; i < 10; i++) {
        printf("hello world!\n");
    }
    int sum = 0;
    for (int i = 1; i <= 100;i++ ) {
        if (i%2==0) {
            continue;//结束本次循环,continue 后面的>语句就不执行了，直接继续下一次循环
        }
        sum += i;
    }
    printf("sum:%d\n",sum);
    
    return 0;
}
