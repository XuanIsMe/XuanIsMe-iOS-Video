#include <stdio.h>

int main(void)
{
    //浮点数 没有 无符号和有符号之说
    
    float a = 1.23;
	printf("a:%f\n",a);//默认 输出 6位小数
	printf("a:%.2f\n",a);//保留两位小数
	
	double b = 1.23;
	printf("b:%f\n",b);
	printf("b:%.2f\n",b);
	
	printf("sizeof_float:%lu\n",sizeof(float));//4
	printf("sizeof_double:%lu\n",sizeof(double));//8
	//float 单精度
	//double 双精度

	return 0;
}
