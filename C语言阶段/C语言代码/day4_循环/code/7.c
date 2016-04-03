#include <stdio.h>

int main(void)
{
	//好的编程习惯:for /while 循环 循环体的内容 不管有多少条语句 都要加{}
	/*
	for (int i = 0;i < 10;i++) 
		printf("hello\n");
		printf("world\n");
	*/
	for (int i = 0;i < 10;i++) { 
		printf("hello\n");
		printf("world\n");
	}
	return 0;
}

