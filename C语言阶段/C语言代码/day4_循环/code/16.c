#include <stdio.h>
/*
 while (表达式) {
      语句块;
	  }

	  执行过程:1.首先判断表达式是否成立，如果不成立，跳出/结束整个循环，如果成立那么执行语句块的内容，语句块的内容执行完之后，再次判断表达式是否成立，如果成立继续执行语句块内容，依次类推 直到表达式不成立 跳出循环

 */
int main(void)
{
	//打印 10个 hello world
	//打印 1到100
	int i = 0;
	while(i < 10) {
		printf("hello world\n");	
		i++;
	}
	printf("------------------\n");
	int j = 0;
	while (j++ < 10) {
		printf("hello\n");
	}
	int m = 10;
	while (m-- > 0) {
		printf("world\n");
	}
	
	int n = 1;
	while (n <= 100) {
		printf("%d\n",n);
		n++;
	}

	return 0;
}

