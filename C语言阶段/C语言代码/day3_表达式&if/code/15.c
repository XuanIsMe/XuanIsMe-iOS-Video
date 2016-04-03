#include <stdio.h>

int main(void)
{
	int x = 2+2*10+1;//2*10 结合了 是一个整体
	//* 优先级高于 + 
	//变量/常量 跟 优先级高的结合
	// ()优先级 最高 
	//如果 忘了优先级 那么就直接 加()
	printf("x = %d\n",x);
	return 0;
}

