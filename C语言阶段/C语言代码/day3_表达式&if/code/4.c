#include <stdio.h>
//产生一个在一定范围的数字

#include <stdlib.h>//arc4random() 在头文件中


int main(void)
{
	//1.先得到一个随机数
	unsigned int num = arc4random();
	//2.得到一个范围1--69
	printf("恭喜%u号中奖!!!\n",num%69+1);
	return 0;
}

