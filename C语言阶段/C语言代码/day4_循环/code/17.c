#include <stdio.h>
/*
   求和
 1+2+....+100
 while
 */
int main(void)
{
	int sum = 0;
	int i = 1;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("sum = %d\n",sum);
	return 0;
}

