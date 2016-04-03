#include <stdio.h>
/*
	傻瓜组1
		 傻瓜1
		 傻瓜2
		 傻瓜3
	傻瓜组2
	    傻瓜1
		傻瓜2
		傻瓜3
	傻瓜组3
		傻瓜1
		傻瓜2
		傻瓜3
 */
int main(void)
{
	//寻找重复 操作
	//循环嵌套  循环里面可以 再嵌套一个或者多个循环	
	for (int i = 1;i <= 3;i++) {
		printf("傻瓜组%d\n",i);
		/*
		printf("     傻瓜1\n");
		printf("     傻瓜2\n");
		printf("     傻瓜3\n");
		...
		*/
		for (int j = 1;j <= 10;j++) {
			printf("    傻瓜%d\n",j);
		}
	}
	
	return 0;
}

