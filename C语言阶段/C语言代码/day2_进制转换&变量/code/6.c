#include <stdio.h>
/*
	类型         占位符
	int           %d
	unsigned int  %u
	long          %ld
	unsigned long %lu
	short         %hd
	unsigned short%hu
	long long     %lld
	unsigned long long  %llu
	char          %c字符类型
	float         %f
	double        %f 
*/
int main(void)
{
	short a = 1;
	printf("%hd\n",a);
	long b = 1;
	printf("%ld\n",b);
	
	int num = 12;
	//内存 中 存得都是 数字的二进制形式
		
	printf("num:%d\n",num);//十进制
	printf("num:%#x\n",num);//十六进制
	printf("num:%#o\n",num);//八进制
	
	num = 0xc;
	printf("num:%d\n",num);//十进制
	printf("num:%#x\n",num);//十六进制
	printf("num:%#o\n",num);//八进制
	
	//不看怎么存 只看怎么读
	
	return 0;
}
