#include <stdio.h>
/*
 1.		将字符数组(10个元素)内容逐个输出。
 比如：
 输入：A B C D E F G H I J
 输出：A B C D E F G H I J
 */
int main(void)
{
	char c[10] = {};
	//输入：A B C D E F G H I J
	for (int i = 0;i < 10;i++) {
		//循环输入
		//第0个 对应 c[0]的地址
		//  1        c[1]
		scanf("%c",&c[i]);
		getchar();
	}
	for (int i = 0;i < 10;i++) {
		printf("%c ",c[i]);
	}
	printf("\n");
	return 0;
}

