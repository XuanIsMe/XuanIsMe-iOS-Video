#include <stdio.h>
/*
	*
   ***
  *****
 *******

 //n为底的等腰
	1.确定行数
	2.找到每一行的字符规律

1/	行数 = (n+1)/2
2/ 行的内容 
分为两块
左部分 空格
             空格个数(内循环的次数) 
	i = 0    3
	i = 1    2
	i = 2    1
	i = 3    0
	
	i+循环次数 = 行数-1
	循环次数 = 行数-1-i = (n+1)/2-1-i = (n-1)/2-i
右部分 *
             *
	i = 0    1
	i = 1    3
	i = 2    5
	i = 3    7

	2*i+1 = 循环次数

 */
int main(void)
{
	int n ;
	scanf("%d",&n);
	for (int i = 0;i < (n+1)/2;i++) {
		//空格
		for (int j = 0;j < (n-1)/2-i;j++) {
			printf(" ");
		}
		//*
		for (int j = 0;j < 2*i+1;j++) {
			printf("*");
		}
		printf("\n");

	}
	return 0;
}

