#include <stdio.h>
/*
22.	流程控制（for循环）	输入一个大写字符，如F
\
比如：

输入:F

输出：

FEDCBA
 EDCBAB
  DCBABC
   CBABCD
    BABCDE
     ABCDEF
 
 1、行数:c-'A'+1
 2、
 空格部分
       空格
 i = 0  0  
 i = 1  1   j = 0
 i = 2  2   j = 0( ) 1 ( )
 循环次数：i
 j 初始值 0
 打印 空格
 
 左半：
 i = 0  6个字符j=0('F'-0)1('F'-1)2('F'-2)...
 i = 1  5     j=0('F'-1-0)1('F'-1-1)2('F'-1-2)
 i = 2  4     j=0('F'-2-0)1('F'-2-1)2('F'-2-2)
 ...
 i+循环次数 = c-'A'+1
 循环次数：c-'A'+1-i
 j初始值 0
 打印字符 c-i-j
 
 右半部分
        循环  打印字符内容
 i = 0   0
 i = 1   1   B    j = 0('B'+0)
 i = 2   2   BC   j = 0('B'+0)1('B'+1)
 i = 3   3   BCD  j = 0('B'+0)1('B'+1)2('B'+2)
 
 循环次数 :i
 j 初始值 :0
 打印字符:'B'+j
 
 
*/
int main(void)
{
    char c;
    scanf("%c",&c);
    
    for (int i = 0; i < c-'A'+1;i++ ) {
        //空格
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        //左半部分
        for (int j = 0;j < c-'A'+1-i;j++ ) {
            printf("%c",c-i-j);
        }
        //右半部分
        for (int j = 0; j < i; j++) {
            printf("%c",'A'+1+j);
        }
        printf("\n");
    }
    
    
    
    

	return 0;
}
