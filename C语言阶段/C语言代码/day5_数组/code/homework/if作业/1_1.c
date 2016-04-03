#include <stdio.h>

//1	表达式（立方）	编写程序，计算该数的立方
#include <math.h>

int main(void)
{
	double num;
	scanf("%lf",&num);
//	printf("%d\n",num*num*num);
	printf("%lf\n",pow(num,3));//pow 函数 求一个数的多少次幂
	
	return 0;
}

