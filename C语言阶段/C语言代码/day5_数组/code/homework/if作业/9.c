#include <stdio.h>
/*
 24	选择和判断(大小写转换)	输入一个字符, 如果字符是大写字母, 转化为小写字母输出, 如果是小写字母, 转化为大写字母输出, 否则直接输出该字符
 */
int main(void)
{
	char c;
	scanf("%c",&c);

	if (c >= 'A'&& c <= 'Z') {
		printf("%c\n",c+32);
	}else if (c >= 'a'&&c <= 'z') {
		printf("%c\n",c-32);
	}else {
		printf("%c\n",c);
	}

	return 0;
}
