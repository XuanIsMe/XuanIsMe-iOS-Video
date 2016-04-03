#include <stdio.h>
/*
 题目要求:
 非诚勿扰 节目 女嘉宾 要求 男嘉宾 的年龄 必须 大于等于30并且年龄小于50 或者 年薪 >= 1000W 才亮灯 否则 灭灯

 */
int main(void)
{
	int age;
	int money;
	printf("请输入你的年龄和年薪:\n");
	scanf("%d%d",&age,&money);
	if ((age >= 30&&age <= 50)||money >= 1000) {
		printf("亲!我为你爆灯!\n");
	}else {
		printf("灭灯,等再过两年再来吧!!\n");
	}
	return 0;
}







