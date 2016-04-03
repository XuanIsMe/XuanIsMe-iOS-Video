#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int num = arc4random();
	printf("恭喜 %u 号中奖了!!!\n",num%69+1);
	return 0;
}
