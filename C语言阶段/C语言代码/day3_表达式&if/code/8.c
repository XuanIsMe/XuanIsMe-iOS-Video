#include <stdio.h>
//关系 运算符
//> < >= <= == !=
int main(void)
{
	//功能 就是比较大小
	// 值:表达式成立 那么值 为1 不成立 0
	//   表达式为真 1  否则 假为0
	//非0为真 0为假
	int a = 3;
	int b = 5;
	printf("a > b->%d\n",a>b);//0
	printf("a >= b->%d\n",a>=b);//0
	printf("a < b->%d\n",a<b);//1
	printf("a <= b->%d\n",a<=b);//1
	printf("a == b->%d\n",a==b);//0
	printf("a != b->%d\n",a!=b);//1
		
	//应用用于 if 分支结构 或者 循环 
	/*
	 if (表达式) {
		语句块;
	 }
		//执行过程:如果表达式成立,那么执行语句块的内容,否则调过{语句块}不执行.

	 */
	return 0;
}

