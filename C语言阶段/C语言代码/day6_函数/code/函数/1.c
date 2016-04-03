#include <stdio.h>
int add(int a,int b) {
	return a+b;
}
int main(void)
{
	int sum = add(23,25);
	printf("sum:%d\n",sum);
	return 0;
}

