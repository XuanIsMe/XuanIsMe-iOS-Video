#include <stdio.h>// 包含头文件 stdio.h 标准输入输出头文件

/*
 思考题
 思考1:不同数据类型存放数据的范围
 思考2
    unsigned short a;
    a+1>0；恒成立对吗？
 思考3
    0 和 '0'一样吗?
	0 '0' '\0' "0"
 思考4
	定义 一个 double 从键盘输入 打印
*/
//函数:就是 具有 某个 特定功能的代码块
//通过 函数 可以 达到这个功能
void test1(void) {
	//思考1：
	unsigned int num = 0;
	printf("unsigned int min:%u\n",num);
	num = 0xffffffff;
	printf("unsigned int max:%u\n",num);
	printf("unsigned int max:%#x\n",num);
	//0111 1111 1111 1111 1111 1111 1111 1111
	int num2 = 0x7fffffff;
	printf("int _max:%d\n",num2);
	//1000 0000 0000 0000 0000 0000 0000 0000
	num2 = 0x80000000;
	printf("int _min:%d\n",num2);
} 
void test2(void)
{   
	//无符号最大值
	unsigned short a = 0xffff;
	unsigned short b = 1;
	//最大值 在 多加1 就变成了最小值
	//物极必反
	printf("%hu\n",a+b);//0
	printf("0->%d\n",0);
	printf("'0'->%d\n",'0');
}
void test4(void)
{
	double a;
	scanf("%lf",&a);
	printf("%f\n",a);
	/*
	 scanf的时候 double 对应 %lf float -》%f
	 printf     double float  都是%f
	 */
}
int main(void)
{
    //调用函数 test1(); 执行里面的代码
	//test1();//调用函数
	//test2();
	test4();
	return 0;
}




