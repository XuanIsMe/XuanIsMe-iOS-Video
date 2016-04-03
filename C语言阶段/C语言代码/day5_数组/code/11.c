#include <stdio.h>

int main(void)
{
	//%s 可以用scanf 结束 一个字符串
	//一个%s 从键盘可以接受 一个 字符串
	//如果scanf("%s%s",c1,c2); -->输入的时候 以空格或者换行分割两个字符串
	//%s 不接受空格 和 换行 ，输入串的时候 空格和换行 作为输入串的结束
	//ahgdfslafhgsd换行
	//ahgdfslafhgsd
	/*
	char c[256] = {};
	int i = 0;
	while (1) {
		scanf("%c",&c[i]);
		if(c[i] == '\n') {
			break;
		}
	}*/

	char c[256] = {};
	scanf("%s",c);

	printf("c-->%s\n",c);

	return 0;
}

