#include <stdio.h>

int main(void)
{
	//循环体中定义变量 实际只定义了一次变量 

	for (int i = 0;i < 10;i++) {
		int num = 10;//这里 只定义一次 num 
		printf("%p\n",&num);
	}
	return 0;
}

