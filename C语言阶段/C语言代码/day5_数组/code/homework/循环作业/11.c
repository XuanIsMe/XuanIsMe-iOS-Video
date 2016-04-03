#include <stdio.h>
/*
 19.	流程控制（for循环）	输入一个大写字母，如F
 \
 比如：
 \
 输入:F
 \
 输出：
 
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
 ABCDEFEDCBA
 
 1.确定行数 --》外循环
 ‘F’-'A'+1 -->行数
    行数 ：c -'A' +1 ->循环次数
 
 2.内循环
  第一部分 空格部分
               空格个数    j
    i = 0         5       0 1 2 3 4
    i = 1         4       0 1 2 3
    i = 2         3       0 1 2
 i+循环次数=行数-1
 循环次数 = 行数-1-i
 
 循环次数: c-'A'-i
 j 初始值: 0
 打印内容: 空格
 
 //三角形左半部分
            循环次数        j
 i = 0        1      A    j=0                  'A'+0
 i = 1        2     AB      0 1          'A'+0 'A'+1
 i = 2        3    ABC      0 1 2 'A'+0  'A'+1 'A'+2
 
 打印 字符 'A'+j
 
 循环次数: i+1
 j 初始值: 0
 打印内容: 'A'+j
 
 //三角形右半部分
            循环次数             j
 i = 0        0
 i = 1        1     A       j = 0  'A'+0
 i = 2        2     BA      j = 1 0 'A'+1 'A'+0
 i = 3        3     CBA     j = 210 'A'+2 'A'+1 'A'+0
 
 打印 字符 'A'+j
 
 循环次数: i
 j 初始值:i - 1
 打印内容: 'A'+j
 
 
 
 */
int main(void)
{
    char c;
    scanf("%c",&c);
    
    
    for (int i = 0;i < c-'A'+1;i++){
        //空格部分
        for (int j = 0;j < c-'A'-i ;j++ ) {
            printf(" ");
        }
        //左半部分
        for (int j = 0;j < i+1 ;j++ ) {
            printf("%c",'A'+j);
        }
        //右半部分
        for (int j = i-1;j >= 0;j-- ) {
            printf ("%c",'A'+j);
        }
        printf ("\n");
    }
	return 0;
}





