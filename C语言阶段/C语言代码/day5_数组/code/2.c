#include <stdio.h>
/*
 ****
 ****
 ****
 ****
 */
int main(void)
{
	/*
	printf("****\n");
	printf("****\n");
	printf("****\n");
	printf("****\n");
	*/
	/*
	//分析:外层循环 控制的打印的行数
			内存循环 控制打印 每一行的内容
	for (int i = 0;i < 4;i++) {
//		printf("****\n");
		//上面也是重复打印 一个 *
		for (int j = 0;j < 4;j++) {
			printf("*");
		}
		//  *打完了在打印 换行
		printf("\n");
	}
	*/
	//输入 两个数 打印 m*n的矩阵
	int m;
	int n;
	scanf("%d%d",&m,&n);
	
	for (int i = 0;i < m;i++) {//控制行
		//控制每一行的内容
		for (int j = 0;j < n;j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

