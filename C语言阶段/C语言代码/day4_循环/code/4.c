#include <stdio.h>
/*
 实现一个计算器
	从键盘输入两个数字和一个字符进行加减乘除运算。
//分析:
1.输入 两个数字 和一个 字符
2.执行什么运算？？判断字符是什么

if-else if  结构
//switch case  break 结构

 */
int main(void)
{
	//定义 两个数字 和 一个字符
	double num1,num2;
	char c;
	scanf("%lf%c%lf",&num1,&c,&num2);

	switch (c) {
		case '+':
			printf("%f%c%f = %f\n",num1,c,num2,num1+num2);
			break;
		case '-':
			printf("%f%c%f = %f\n",num1,c,num2,num1-num2);
			break;
		case '*':
			printf("%f%c%f = %f\n",num1,c,num2,num1*num2);
			break;
		case '/':
			if (num2){//num != 0
				printf("%f%c%f = %f\n",num1,c,num2,num1/num2);
			}else {
				printf("除数不能为0\n");
			}
			break;
		default:
			printf("error\n");

	}

	return 0;
}




