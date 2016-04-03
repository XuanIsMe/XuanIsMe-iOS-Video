#include <stdio.h>
/*
17	选择和判断(分数转化器)	西方国家常使用ABCDE五级制表示一个人的成绩, 输入ABCDE中的一个值, 输出对应的分数范围\	\	(考察switch)

说明: 
\
如果输入A, 输出90-100
\
如果输入B, 输出80-89
\
如果输入C, 输出70-79
\
如果输入D, 输出60-69
\
如果输入E, 输出0-59
\
如果输入其他的字符,输出ERROR

*/
int main(void)
{
	char c;
	scanf("%c",&c);

	switch(c) {
		case 'A':
			printf("90-100\n");
			break;
		case 'B':
			printf("80-89\n");
			break;
		case 'C':
			printf("70-79\n");
			break;
		case 'D':
			printf("60-69\n");
			break;
		case 'E':
			printf("0-59\n");
			break;
		default:
			printf("ERROR\n");
	}	


		

	return 0;
}
