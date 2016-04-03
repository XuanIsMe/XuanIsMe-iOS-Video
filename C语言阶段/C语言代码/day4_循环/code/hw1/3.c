#include <stdio.h>
/*
	表达式（字符判断1）	定义一个字符型变量，将其初始化，判断是否是小写字符。输出Y或N，并将其输出注意输入使用scanf输入 
\
c>=‘a’&&c <= ‘z’

比如：
\
\	输入 a 输出为Y
\
\	输入 D 输出为N
*/
int main(void)
{
	char c;
	scanf("%c",&c);
	if (c>='a'&&c<='z') {
		printf("Y\n");
	}else {
		printf("N\n");
	}


	return 0;
}
