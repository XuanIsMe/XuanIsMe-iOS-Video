#include <stdio.h>
/*
9.输入 5  8；
计算 5 + 6 + 7 + 8；
输出 26.
*/
int main(void)
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	int sum = 0;
	for (int i = num1;i <= num2;i++) {
		sum += i;
	}
	printf("sum_for:%d\n",sum);

	//while

	sum = 0;//清零
	int j = num1;
	while(j <= num2) {
		sum += j++;
	}
	printf("sum_while:%d\n",sum);




	

	return 0;
}
