#include <stdio.h>

int main(void)
{
	int n = 10;
	do{
		printf("hello world!\n");
		n--;
	}while(n > 0);
	//先执行do 在判断

	do {
		printf("do-while\n");
	}while(0);
	
	while (0) {
		printf("while\n");
	}
	//输入 一串 字符 当输入换行的结束 并且打印
	/*
	char c;
	while (1) {
		scanf("%c",&c);
		if (c == '\n') {
			break;
		}
		printf("%c",c);
	}
	printf("\n");
	*/
	char c;
	do {
		scanf("%c",&c);
		printf("%c",c);
	}while(c != '\n');
	printf("\n");
	//输入  abcdef换行

	return 0;
}


