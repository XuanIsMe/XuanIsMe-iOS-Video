#include <stdio.h>

int main(void)
{
	//
	int age = 23;
	age = 25;
	//age = 25; 赋值运算表达式
	//1.功能:就是给一个变量空间赋值
	//2.表达式的值:就是左侧变量的值 

	int a = (age = 100);
	printf("a = %d\n",a);

	int b;
	//多个 赋值运算符 是从右向左运算
	b = a = 200;//--》 b = (a = 200);
	// b -> 200 
	int c = b+1;//赋值运算符的优先级是比较低的 只比逗号高 数字和变量 要和优先级高的先结合

	printf("c = %d\n",c);
	
	//赋值运算符 左侧 只能是变量 不能常量或者表达式 
//	2 = 3;
//	c+1 = b;

	return 0;
}

