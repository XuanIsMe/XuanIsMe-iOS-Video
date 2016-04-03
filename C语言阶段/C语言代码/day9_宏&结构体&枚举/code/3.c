#include <stdio.h>

//一改全改
//宏名中间 不能有空格
#define PI 3.1415926
#define ADD(a,b) a + b
int main(void)
{
	int sum = ADD(1,2);//1 + 2
	double r = 2.0;
	double s = PI*r*r;
	double c = 2*PI*r;
	return 0;
}

