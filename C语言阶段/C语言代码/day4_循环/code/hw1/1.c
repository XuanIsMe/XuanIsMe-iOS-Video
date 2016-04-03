#include <stdio.h>
/*
 1.利用条件表达式判断x和y，找出两个数的最小值，将最小值输出。注意输入使用scanf输入, 多个参数使用空格隔开
 比如：
	输入 42 22 输出为22
	输入 60 8 输出为8
 */
int main(void)
{
	int num1;
	int num2;
	scanf("%d%d",&num1,&num2);
    //输入格式
    //数字1空格数字2换行
    //或者 数字1换行数字2换行
    //42 22换行
    
	if(num1 > num2) {
		printf("%d\n",num2);
	}else {
		printf("%d\n",num1);
	}
//方法2
	int min = num1>num2?num2:num1;
	printf("%d\n",min);
	return 0;
}


