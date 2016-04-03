#include <stdio.h>
/*
 *
 **
 ***
 ****
 *****
 */
int main(void)
{
	int num;
	scanf("%d",&num);
	//以num 为底的直角
	for (int i = 0;i < num;i++) {
		/*      star个数 
		 i = 0   1
		 i = 1   2
		 i = 2   3
		 i = 3   4  
		 内循环的循环次数 i+1 
		 */
		for (int j = 0 ;j < i+1;j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}

