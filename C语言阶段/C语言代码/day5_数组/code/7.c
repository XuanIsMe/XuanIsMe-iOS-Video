#include <stdio.h>
/*
   数组:具有 相同 数据类型变量的 有序 集合
	
   类型 数组名[元素个数];int a[5];
   访问元素 
   数组名[索引];a[0] a[1] a[2]...
   a[0] a[1] a[2] a[3] a[4]
   XXXX|XXXX|XXXX|XXXX|XXXX|
 */
int main(void)
{
//	int age[10] = {1,2,3,1.23,1.34};//错误 必须 都是 int
	
	//定义一个数组 整型数组 元素类型 是int
	
	int age[5];
	age[0] = 20;//访问第一个元素 赋值
	age[1] = 23;
	age[2] = 19;
	age[3] = 25;
	age[4] = 20;//第5个元素
	//打印每个元素的值2
	printf("age[0] = %d\n",age[0]);
	printf("age[1] = %d\n",age[1]);
	printf("age[2] = %d\n",age[2]);
	printf("age[3] = %d\n",age[3]);
	printf("age[4] = %d\n",age[4]);
	//定义个元素 是double 类型的数组
	double scores[3];
	scores[0] = 88.9;
	scores[1] = 90;
	scores[2] = 100;
	
	//字符数组
	char c[5];
	c[0] = 'h';
	c[1] = 'e';
	c[2] = 'l';
	c[3] = 'l';
	c[4] = 'o';


	return 0;
}

