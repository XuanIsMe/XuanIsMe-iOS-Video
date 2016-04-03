#include <stdio.h>

int main(void)
{
	//输入10个数字 放入数组
	int a[10] = {};
	for (int i = 0;i < 10;i++) {
		scanf("%d",&a[i]);
	}
	for (int i = 0;i < 10;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

