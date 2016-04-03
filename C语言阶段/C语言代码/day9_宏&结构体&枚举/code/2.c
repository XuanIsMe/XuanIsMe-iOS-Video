#include <stdio.h>
//定义一个宏 --》就是一堆代码替换
#define A 5

int main(void)
{
	int a = A;//预处理阶段 会宏A 换成 5
	//int a = 5;
	return 0;
}

