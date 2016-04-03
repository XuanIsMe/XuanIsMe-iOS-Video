#include <stdio.h>

int main(void)
{
	//键盘输入一个字符 并打印
	char c;
	scanf("%c",&c);//按照 %c键盘 输入 每一个键都是 字符 包括 空格 换行符也是字符
	printf("c->%c\n",c);
	return 0;
}
