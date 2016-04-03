//
//  main.c
//  宏
//
//  Created by lzxuan on 15/12/31.
//  Copyright (c) 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//一改全改
//无参宏
#define PI 3.14
//无参宏应用: 圆周率 或者 数组元素个数 或者 文件路径/网址路径
#define kPath "/Users/lzxuan/Desktop/堆栈面试题.rtf"
#define kNetUrl "http://www.baidu.com"

//宏定义 方便我们在代码中使用

//有参宏
//带参数的宏 宏名和()中间不能有空格
//宏的参数 没有类型

#define ADD(a,b) a+b
#define ADD2(a,b) (a+b)//最好加上()
#define MUL(a,b) (a*b)
#define MUL2(a,b) ((a)*(b)) //最好 参数和 整体都加上括号
//用宏实现求两个数的较大值
#define MAXOFNUMBER(a,b) a>b?a:b

//宏定义 内容 必须在同一行
//在宏定义 中 \ 表示的 连接符 把下面一行 跟上一行连接成一行
#define PRINTMAX(a,b) if (a > b) {\
                            printf("%d大\n",a);\
                      }else {\
                          printf("%d大\n",b);\
                      }
int add(int a,int  b) {
    return a+b;
}
int main(int argc, const char * argv[]) {
    add(1,2);
    add(1,2);
    PRINTMAX(12, 13);
    PRINTMAX(12, 13);
    printf("%d\n",MAXOFNUMBER(100, 200));
    
    printf("*******************\n");
    double sum = ADD(1.1, 2);//预处理 阶段 就会换成 1+2
    printf("sum = %f\n",sum);
    
    printf("%d\n",ADD(1, 2)*ADD(2, 3));//8 //1+2*2+3
    printf("%d\n",ADD2(1, 2)*ADD2(2, 3));//(1+2)*(2+3)
    
    printf("%d\n",MUL(3-1, 5-2));//(3-1*5-2)
    printf("%d\n",MUL2(3-1, 5-2));//((3-1)*(5-2))
    
    
    printf("*******************\n");
    printf(kPath);
    double r = 2.0;
    double s = PI*r*r;
    double c = 2*PI*r;
    printf("s = %f c= %f\n",s,c);
    return 0;
}





