#include <stdio.h>
//隐式转换
//不同数据类型之间 运算 存在隐式转换

int main(void)
{
	//整数向浮点数看齐
	double f = 3.14;
	long a = 100;
	printf("%ld\n",f+a);
//短字节 向 长字节 看齐	
	int b = 1;
	printf("%d\n",a+b);
	printf("%lu\n",sizeof(a+b));
	//有符号 向 无符号看齐
	int x = -10;
	unsigned int y = 1;
	if (x+y >= 0) {
		printf("有符号向无符号看齐\n");
	}else {
		printf("xxxxxx\n");
	}

	return 0;
}

