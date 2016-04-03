#include <stdio.h>
//表达式1,表达式2,表达式3,...表达式n;
//从左 向右依次 执行
//表达式的值:??

int main(void)
{
	int a = 3;
	int b;
	int c;
	//逗号 优先级 最低
	int x = (b = a+1,c = b+1,a = 10);
	//逗号表达式的值 就是 最后一个表达式的值
	printf("a = %d b = %d c = %d x = %d\n",a,b,c,x);
	//10 4 5 10
	
	return 0;
}

