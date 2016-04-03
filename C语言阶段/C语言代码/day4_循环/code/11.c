#include <stdio.h>
//8.多种方法打印  //求1到100内的所有奇数的和；1+3+5+...+99;
int main(void)
{
	int sum = 0;
	for (int i = 1;i <= 100;i++) {
		//判断 奇数
		if (i%2 != 0) {
			sum += i;//奇数的时候 求和
		}
	}
	printf("sum:%d\n",sum);
	
	sum = 0;//重新 置为0 可以再次使用
	for (int i = 1;i <= 100; i += 2) {
		sum += i;
	}
	printf("sum:%d\n",sum);
	//方法3:
	sum = 0;
	for (int i = 1; i <= 100;i++ ) {
		if (i%2==0) {
			continue;//结束本次循环,continue 后面的语句就不执行了，直接继续下一次循环
		}
		sum += i;
	}

	printf("sum:%d\n",sum);
	
	return 0;
}

