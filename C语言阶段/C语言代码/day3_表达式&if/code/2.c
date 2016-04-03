#include <stdio.h>

int main(void)
{
	//注意的问题
	int a = 5;
	double b = 3;
//	printf("%d\n",a/0);//除数不能为0
//	printf("%d\n",3/5);
	//怎么 使b/a ---》0.6
	//与小数运算 就可以得到 小数
	//不同数据类型直接运算有 隐式转换
	printf("%f\n",b/a);
	int c = 3;
	printf("a/c ==>%f\n",(double)a/c);
	//强制类型转换    格式 (类型)变量/常量/表达式
	//(double)1; (double)(a+b) ; (double)a
	//(double)a --> 临时强制转换一下a空间中的值的类型。 变量a的类型不会改变的
	printf("%lu\n",sizeof(a));

	return 0;
}

