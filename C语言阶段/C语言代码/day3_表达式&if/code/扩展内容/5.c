#include <stdio.h>
/*
float&double  浮点型 

【扩展】有效位数(小数点前和小数点后所有的位)   float  6-7  double 15—16
*/
int main(void)
{
	float f1 = 123.45678901;
	printf("%.8f\n",f1);
	
	double f2 = 123456789.1234567891234;
	printf("f2:%.13f",f2);
	return 0;
}
