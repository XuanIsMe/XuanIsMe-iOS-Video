#include <stdio.h>
//【扩展】
//逻辑表达式
int main(void)
{
	int a = 2;
	int b = 10000;
	if ((a>b) && (b=10)) {
		printf("hello\n");
	}
	//逻辑与 运算的时候 如果第一个表达式为假，那么第二个表达式将不在执行

	printf("b:%d\n",b);

	if ((a < b)||(b = 100)) {
		printf("hello\n");
	}
	printf("b:%d\n",b);
	//逻辑或  要注意，如果第一个表达式为真，那么第二个表达式将不在执行

	return 0;
}
