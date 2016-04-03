#include <stdio.h>
//下面的 参数 int p[100],实际上就是int *p
void printArray2(int p[100],int n) {
	for (int i = 0; i < n; i++) {
		printf("%d\n",p[i]);			
	}
}
/*
void printArray(int *p,int n) {
	for (int i = 0; i < n; i++) {
		printf("%d\n",p[i]);			
	}
}
*/

int main(void)
{
	return 0;
}

