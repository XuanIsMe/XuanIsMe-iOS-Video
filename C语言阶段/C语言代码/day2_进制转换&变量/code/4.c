#include <stdio.h>
//整型
/*
类型                       关键字
整型                            int
无符号整型             unsigned int
长整型                      long
无符号长整型         unsigned long
短整型                      short
无符号短整型          unsigned short

*/
int main(void)
{
	/*
		sizeof 格式
		sizeof(类型/变量/值)
		sizeof 是一个C语言关键字 不是 函数
		功能:求一个数据类型/变量/值 所占 空间的大小 
	*/
	//指令 补充:编辑模式下 ctrl p  可以自动联想补充 关键字 或者 函数
		
	//内存 以 字节为单位  1字节 = 8位
	/*
		求字节大小 跟 系统cpu 位数 和 编译器 有关
		当前mac 系统 是 64位
		32位系统 中 long 占 4字节
	*/	
	//类型可以决定 空间大小
	printf("sizeof_int: %lu\n",sizeof(int));	//4	
	printf("sizeof_unsigned int:%lu\n",sizeof(unsigned int));//4		
	printf("sizeof_long:%lu\n",sizeof(long));//8		
	printf("sizeof_unsigned long:%lu\n",sizeof(unsigned long));//8		
	printf("sizeof_short:%lu\n",sizeof(short));//2		
	printf("sizeof_unsigned short:%lu\n",sizeof(unsigned short));//2		
	
	return 0;
}
