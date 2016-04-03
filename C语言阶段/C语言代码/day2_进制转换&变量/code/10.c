#include <stdio.h>

int main(void)
{
	/*
		键盘输入两个整数 并且打印
	*/
	int num1;
	int num2;
	scanf("%d%d",&num1,&num2);
	//格式化字符串
	/*
	输入格式:
		方式1:
		123换行321换行
		方式2:
		123空格321换行
	*/
	printf("num1:%d num2:%d\n",num1,num2);
	return 0;
}
