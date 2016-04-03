#include <stdio.h>
/*
	12	表达式（字符转换1）	定义一个字符型变量c，将其初始化，判断是否是小写字符。如果是小写将其转换成大写字母,并输出,注意输入使用scanf输入 
\
比如：
\
\	输入 a 输出为A
\
\	输入 n 输出为N
*/
int main(void)
{
	char c;
	scanf("%c",&c);
    //判断
	if(c>='a'&&c<='z') {
	//	c = c - 32;
		c -= 32;//小写 转大写
	}
	printf("%c\n",c);


	return 0;
}
