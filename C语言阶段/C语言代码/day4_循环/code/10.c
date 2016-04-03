#include <stdio.h>
//6.求和1+2+3+4+...+10;
/*
 分析:
	0+1 ->         1
	1+2 ->(0+1)+2->3
	3+3 ->(1+2)+3 ->6
	6+4 ->(1+2+3)+4 ->10

	...  上一次的和 + 当前数字
 */
int main(void)
{
	int sum = 0;//定义个变量 存放和
	for (int i = 1;i <= 10;i++) {
		// 重复 出现 上一次的和 + 当前数字
		//sum = sum + i;
		sum += i;
	}
	printf("sum = %d\n",sum);

	int n = 100;
	int sum2 = 0;
	for (int i = 1;i <= n;i++) {
		sum2 += i;
	}
	printf("sum2:%d\n",sum2);
	
	return 0;
}

