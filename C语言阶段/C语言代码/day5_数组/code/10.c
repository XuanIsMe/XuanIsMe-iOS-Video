#include <stdio.h>

int main(void)
{
	//字符串:就是一串字符  
	//字符串 常量 是用""括起来的的一串字符 最后隐藏着一个\0 (结束标志)
	//字符数组的初始化 可以使用下面 两种形式
	char c[] = {'h','e','l','l','o','\0'};
	char c1[] = "hello";
	for (int i = 0;i < sizeof(c)/sizeof(c[0]);i++) {
		printf("%c",c[i]);
	}
	printf("\n");
	//打印字符串 还可以 一起打印 用%s --》只能打印字符串 不能打印其它(必需以\0结束的字符串)
	printf("c->%s\n",c);// %s ->对应一个字符数组名
	//从字符串的第一个元素开始打印，遇到\0

	

	return 0;
}

