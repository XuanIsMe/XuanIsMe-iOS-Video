#include <stdio.h>
//6	流程控制（闰年问题）	输入一个年份，判断该年份是平年还是闰年：
//注: 闰年就是第二个月有29天的那一年, 能被4整除但是不能被100整除的是闰年, 或者能被400整除的也是闰年
int main(void)
{
	int year;
	scanf("%d",&year);
	if((0 == year%4 && year%100 != 0)||year%400 == 0) {
		printf("Y\n");
	}else{
		printf("N\n");
	}
		

	return 0;
}
