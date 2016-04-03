#include <stdio.h>

int main(void)
{
	//下面的语法是错得
	float f = 3.14;
	int num = 2;
	switch (f) {//必须是整型 表达式
		case 1.0://必须是整型 常量(比如 整型数字 整型字符)
			printf("1\n");
		case num://错
			printf("2\n");
		case num+1://错
			printf("3\n");
		default:
			printf("error\n");
	}
	return 0;
}

