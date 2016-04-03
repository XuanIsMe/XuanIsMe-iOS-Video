#include <stdio.h>
/*
 F
 FE
 FED
 FEDC
 FEDCB
 FEDCBA

 //输入一个字符c 打印直角
 1.行数: c - 'A' +1
 2.行的内容
           每一行循环次数   j   行内容
 i = 0        1             0     F
 i = 1        2             01    F(F-1)
 i = 2        3             012   F(F-1)(F-2)

 循环次数 = i+1
 //每一行的字符 = F - j = c-j
 */

int main(void)
{
	char c;
	scanf("%c",&c);
	for (int i = 0;i < c-'A'+1;i++) {
		//行的内容 也要变 行的循环次数也变
		for (int j = 0;j < i+1;j++) {
			printf("%c",c-j);
		}
		printf("\n");
	}
	return 0;
}

