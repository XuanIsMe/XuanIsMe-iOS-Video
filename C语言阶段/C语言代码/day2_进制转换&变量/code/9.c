#include <stdio.h>

int main(void)
{
	//从键盘输入一个整数 并且打印出来
	/*
		分析：
		输入一个数那么要保存。
		1.就要定义一个变量
		2.有了变量 之后 就可以实现 从键盘 输入 保存
		
		/
	*/	
	int num;
	
	scanf("%d",&num);//scanf 永远 不用 加 \n 和 空格
	//功能:从键盘接收一个数字 放入 num中
	//scanf 后面 参数 变量 必须要加&
	//"%d",num 格式化 字符串
	/*
	输入格式:
		数字换行  换行表示这个数字 输完了
	*/

	printf("num:%d\n",num);	

	return 0;
}
