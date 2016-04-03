#include <stdio.h>
/*
 
 */
int main(void)
{
	/*
	 死循环
	 */
	/*
	   //表达式3可以省去
	for (int i = 0;i < 10;) {
		i++;
	}*/
	/*//第一个初始化语句 也可以省去
	int i = 0;
	for (;i < 10;) {
		i++;
	}
	*/
	//for 循环的 初始化 语句 表达式2 表达式3 都可以省去 但是 ; 不能省去

	/*
	for (;1;) {//死循环/ 无限循环
		printf("hello\n");
	}
	
	 while(1) {
	 
	 }
	 */
	for (;;) {//死循环/ 无限循环
		printf("hello\n");
	}
	
	return 0;
}

