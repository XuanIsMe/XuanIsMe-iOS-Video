#include <stdio.h>

int main(void)
{
	int b = 10;
	//判断一个变量的值 是否恒等于 一个数
	if (100 == b) {// 初学者 不建议 写成 b == 100
		printf("hello\n");
	}
	printf("我是什么:%d\n",b);
	return 0;
}

