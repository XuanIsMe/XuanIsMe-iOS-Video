#include <stdio.h>
/*
 5.      循环(统计字符个数)	输入多个字符, 以回车符结束, 统计输入的字母个数
 */
int main(void)
{
	char c;
	//重复内容 输入多个字符
	//abcd123abcd回车
	//循环中的scanf 第一次匹配字符a 第二次b
	int cnt = 0;//计数器
	while (1) {
		scanf("%c",&c);//重复操作
		if (c == '\n'){
			break;//跳出循环
		}
		//立即判断
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')) {
			cnt++;
		}
	}
	printf("%d\n",cnt);

	return 0;
}
