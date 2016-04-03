#include <stdio.h>

//main 函数 是 程序的入口函数
int main(void)
{
	/*
		先定义/声明一个变量 
		类型 变量名;
		内存角度:在内存中开辟一个空间
	*/
	int age;

	age = 23;//赋值 把23 数字 放在 age 变量中
	//内存角度:把 数字23 存在 age表示的空间 	

	printf("age的值:%d\n",age);//打印 变量age 中的值
	//内存角度:从内存 age空间 读出 age的值
	//printf 功能 打印输出 ""中的内容
	// %d 表示 一个占位符 为 后面 变量的值占位
	// 一个占位符 对应 一个 值
	// \n 表示 换行符
	return 0;
}


