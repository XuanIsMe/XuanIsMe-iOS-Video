#include <stdio.h>
/*
 题目要求:
 非诚勿扰 节目 女嘉宾 要求 男嘉宾 的年龄 必须 大于等于30 才亮灯 
 */
int main(void)
{
	int age;
	printf("请输入你的年龄:\n");
	scanf("%d",&age);
	//如果 age 大于等于 30 表达式成立执行{}里面的内容
	if (age >= 30) {
		printf("亲!我为你爆灯!\n");
	}
	return 0;
}







