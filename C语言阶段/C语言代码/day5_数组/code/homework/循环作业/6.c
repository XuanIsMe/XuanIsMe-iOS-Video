#include <stdio.h>
/*
 12.	流程控制（for求阶乘的和 ）	输入n(int类型)，打印1！+2！+3！+4！+5！+。。。+n!的值
 比如：
 
 输入：2
 输出：
 3
 
 输入：3
 
 输出:
 9
 */
int main(void)
{
	int n;
	scanf("%d",&n);

	long long mul = 1;
	long long sum = 0;

	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= i;j++) {
			mul *= j;
		}
		//mul 阶乘
		sum += mul;//阶乘的和
		mul = 1;//mul 重置为1		
	}
	
	printf("%lld\n",sum);
	
	//方法2：
	sum = 0;
	int tmp = 1;
	for (int i = 1;i <= n;i++) {
		tmp = tmp * i;
		sum = sum + tmp;
	}
	printf("%lld\n",sum);

	return 0;
}
