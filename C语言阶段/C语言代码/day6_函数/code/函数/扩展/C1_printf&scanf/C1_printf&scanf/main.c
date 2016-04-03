//
//  main.c
//  C1_printf&scanf
//
//  Created by LZXuan on 14-11-4.
//  Copyright (c) 2014年 LZXuan. All rights reserved.
//

#include <stdio.h>
//printf
int main(int argc, const char * argv[])
{
    int ret = printf("123456abc\n");
    /**
        printf函数的返回值作用：
     *  统计printf() 中"" 中 输出到终端屏幕上的有效字符个数
     */
    printf("ret:%d\n",ret);//10
   
    ret = printf("abc%d\n",123);//abc123\n
    
    printf("ret2:%d\n",ret);//7
    // ///////////////////////////////
    //scanf 函数的返回值
    int num;
    char c;
    /**
     *  scanf 函数返回值的作用: 返回 正确从键盘上匹配参数的个数
     */
    int num2;
    int ret3 = scanf("%d%c%d",&num,&c,&num2);
    //输入的格式必须要: 数字字符数字回车
    //123a567回车
    printf("ret3:%d\n",ret3);//3
    
    
    return 0;
}

