#include <stdio.h>
//% -->两侧只能 是 整型
/*
 %求余的功能: 
 1.判断是否能被整除 (奇偶性)
 2.求范围  1—69  num%69 + 1     
 3.% 任意进制的每一位  %2    num%10 

 */
int main(void)
{
	/*
	float f = 3.14;
	printf("%f\n",f%2);
	*/
	//判断一个数是否是偶数
	int num;
	scanf("%d",&num);
	if(num%2 == 0) {
		//如果 num余2 恒等于 0 表示 偶数
		printf("%d是一个偶数\n",num);
	}else{
		printf("%d是一个奇数\n",num);
	}

	return 0;
}

