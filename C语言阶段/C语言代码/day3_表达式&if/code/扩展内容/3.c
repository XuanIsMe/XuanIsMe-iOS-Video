#include <stdio.h>
/*
 【扩展】
 常量:程序运行过程中不能发生改变的量
 */
int main(void)
{
    //1.整型常量
    23;
    //2.浮点数常量
    1.23;
	//3.字符常量
	'a';
	'\n';
    //4.字符串常量 ->就是一串字符 
	"hello world";
    //5.const 修饰的常量
	const int age = 23;//const 修饰的 量是一个常量，age 只读不能改 所以必须初始化
//	age = 24;//错
    //连续定义变量 连续赋值
	return 0;
}

