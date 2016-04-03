#include <stdio.h>
//算术运算符
//+ - * / %
int main(void)
{
	int a = 5;
	int b = 3;
	//1/表达式的功能是什么
	//2/表达式的值是什么
	//a+b 表达式的功能 求两个数的和
	//a+b 表达式的值 就是a+b进行算术运算之后的和
	printf("a+b = %d\n",a+b);//8
	printf("a-b = %d\n",a-b);//2
	printf("a*b = %d\n",a*b);//15
	//相同数据类型直接进行运算 那么 结果 还是同一种类型
	//整数/整数 --》结果还是整数 按照数学得出的结果如果有小数，小数全部舍去
	printf("a/b = %d\n",a/b);//1
	
	printf("a%%b = %d\n",a%b);//2
	return 0;
}

