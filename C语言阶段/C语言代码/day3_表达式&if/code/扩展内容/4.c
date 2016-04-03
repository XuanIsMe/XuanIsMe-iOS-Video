#include <stdio.h>
// 
/*
【扩展】缓冲区：
 printf(“hello All”);
 //首先把hello All 放到屏幕缓冲区
 什么时候把缓冲区的内容输出到屏幕上
 满足
 1.缓冲区满了
 2.遇到换行符
 3.遇到scanf
 4.使用刷新流 fflush(stdout);
 */
int main(void)
{
	//1.
//	printf("1helloworld!\n");
/*
   2.
	printf("2helloworld!");
	int num;
	scanf("%d",&num);
*/
	
	printf("3helloworld!");
	fflush(stdout);//刷新标准输出流 
//
	while(1){
	
	}
	return 0;
}

