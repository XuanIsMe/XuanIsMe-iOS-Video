#include <stdio.h>
/*
 4. 多种方法打印26个小写字母

 */
int main(void)
{
	//method1:
	for (int i = 0;i < 26;i++) {
		/*
		 i = 0 'a'
		 i = 1 'b'-> 'a'+1
		 i = 2 'c'-> 'a'+2
		 ...         'a'+i
		 */
		printf("%c\n",'a'+i);
	}
	//method2:
	for (char c = 'a';c <= 'z';c++) {
		printf("%c\n",c);
	}
	//5.逆序打印 26个字母
	//变量是有 作用域(使用范围)
	//下面 for 循环中的 i  只能在 for () {}内使用
	for (int i = 0;i < 26;i++) {//这里的i 和 上面for的i 不是同一个
		printf("%c\n",'z'-i);
		/*
		 i = 0 z
		 i = 1 y 'z'-1
		 i = 2 x 'z'-2
			   'z'-i
		 */
	}

	for (char c = 'z';c >= 'a';c--) {
		printf("%c",c);
	}
	printf("\n");

	/*****************************************/
	int age = 2;//age 的使用范围 在 从定义开始 到 包含 这个age的{}结束
	age = 20;
	if (1) {
		int a = 3;//这个a 作用域:从定义开始 到 包含a的{}结束
	}
	//a = 1;
	return 0;
}

