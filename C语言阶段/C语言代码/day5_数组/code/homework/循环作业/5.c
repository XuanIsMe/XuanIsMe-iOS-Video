#include <stdio.h>
/*
 11.	（输出两分数和）	输入两个分数，输出两分数之和(要求约分)
 
 输入 3/5 7/8
 
 输出：
 59/40
 
 输入:2/8 5/12
 
 输出:
 
 2/3
 
 
 12/24 -->1/2
 */
int main(void)
{
	int a_denominator;
	int a_numerator;
	int b_denominator;
	int b_numerator;
	scanf("%d/%d%d/%d",&a_numerator,&a_denominator,&b_numerator,&b_denominator);
	//两个分数的分母的乘积
	int sum_d = a_denominator*b_denominator;
	int sum_n = a_denominator*b_numerator+a_numerator*b_denominator;
	//找最大公约数
	int max = 1;//保存最大公约数
	for (int i = 2;i <= (sum_d < sum_n?sum_d:sum_n);i++) {
		//分子和分母能被同一个数整除 就是公约数
		if (sum_d%i==0&&sum_n%i==0) {
			max = i;
		}
	}
	//约分
	printf("%d/%d\n",sum_n/max,sum_d/max);
	





	return 0;
}
