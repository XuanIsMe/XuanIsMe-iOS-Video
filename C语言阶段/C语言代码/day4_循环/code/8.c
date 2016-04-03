#include <stdio.h>
/*
 从1打印到100
 分析:
 1.重复打印数字
 2.结束条件 循环100次
 
 */
int main(void)
{
	
	for (int i = 0;i < 100;i++) {
		//i = 0 打印 1
		//i = 1      2
		//i = 2      3
		//...        i+1
		printf("%d\n",i+1);
	}
	
	return 0;
}

