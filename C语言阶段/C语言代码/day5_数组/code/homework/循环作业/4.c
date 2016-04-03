#include <stdio.h>
/*
 10.	流程控制（数值序列3）	输出数字序列 1，2，3，5，8，13，21...，输出个数由键盘输入。注意输入使用scanf输入
 //斐波那契数列
 
 \
 比如：
 \
 输入 3输出为
 
 1
 2
 3
 
 输入 4 输出为
 1
 2
 3
 5
 */
int main(void)
{
	//
	int num;
	//数列的个数
	scanf("%d",&num);
	int x = 1;
	int y = 1;
	// 1 2 3 5 8 13
	for (int i = 0;i < num; i++) {
		//重复打印
		printf("%d\n",x);
		x = x+y;//下一次x的值
		y = x-y; //y记录的是上一次x的值
	}





	return 0;
}
