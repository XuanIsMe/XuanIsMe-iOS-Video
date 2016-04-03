#include <stdio.h>
/*
 2.	循环(计算阶乘)	输入一个数为n, 计算这个数的阶乘, 例如一个数为5,则5的阶乘为 1*2*3*4*5=120
 3.	循环(计算某个数的位数)	输入一个正整数, 计算这个正整数的位数
 4.    循环(逆序输出某个数)	整数逆序输出, 例如输入一个整数12345,输出5 4 3 2 1
 5.    循环(统计字符个数)	输入多个字符, 以回车符结束, 统计输入的字母个数
 6.	循环(计算10个数的平均值)	输入10个数, 计算这十个数的平均值
 7.	循环(判断素数/质数)	输入一个数, 判断这个数是否为素数,如果是素数输出YES,如果不是输出NO。
		素数/质数就是除了1和它本身之外不能被其他数整除的数,从2开始的素数有 2,3,5,7,11,13等等
 */
void test7(void) {
	int num;
	scanf("%d",&num);
	//拿这个数 去 和 2---num-1 相除 看 是否能够整除
	int isPrime = 1;//先假设 是质数  1表示质数0不是
	for (int i = 2;i < num;i++) {
		if(num % i == 0) {
			isPrime = 0;//标记 0 不是质数
			break;
		}
	}
	if (isPrime) {//判断标记
		printf("YES\n");
	}else {
		printf("NO\n");
	}
}
void test2(void) {
	//阶乘 从 1 开始 乘到 n
	int n;
	scanf("%d",&n);
	//1*2*3*4*...*n
	int mul = 1;
	for (int i = 1;i <= n;i++) {
		mul = mul*i;	
	}
	printf("%d\n",mul);
}
void test3(void) {
	//求一个数的每一位 都要用辗转相除求余
	/*
		    余数          商
	 123%10  3    123/10  12
	 12 %10  2     12/10   1
	 1%10    1             0

	 重复 操作  先求余  再求商 商 求余 再求商
	
	 */
	int num;
	scanf("%d",&num);
	/*
	int ret;
	int div = num;
	while (div) {//div != 0
		ret = div%10;
		printf("%d ",ret);
		div = div/10;
	}*/
	while(num) {
		printf("%d ",num%10);
		num /= 10;
	}
	printf("\n");

}
void test3_1(void) {
	
	int num;
	int count = 0;
	scanf("%d",&num);
	for (;num != 0;) {
		printf("%d ",num%10);
		num /= 10;
		//每求一位 计数+1
		count++;
	}
	printf("\n");
	printf("count = %d\n",count);
}
void test6(void) {
	//输入 10 数 求平均数
	int num;
	int sum = 0;
	for (int i = 0 ;i < 10;i++) {
		scanf("%d",&num);
		sum =sum+num;
	}
	printf("avg = %d\n",sum/10);

}
int main(void)
{
	//test2();
//	test3_1();
//	test6();
	test7();
	return 0;
}

