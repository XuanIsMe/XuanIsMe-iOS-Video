#include <stdio.h>
/*
19	选择和判断(计算数学表达式的值)	数学表达式求值
\
\	\	当x<0时\	\	y=x*x, 输出y的值
\
\	\	当0=<x<5时\	y=2x+1, 输出y的值
\
\	\	当x>=5时\	\	y=3x-12, 输出y的值
*/
int main(void)
{
	int x;
	scanf("%d",&x);
	int y;
	if(x<0){
		y = x*x;
	}else if(x>=0&&x<5){
		y = 2*x+1;
	}else if(x>=5){
		y = 3*x-12;
	}
	printf("%d\n",y);
	return 0;
}
