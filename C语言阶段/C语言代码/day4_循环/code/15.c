#include <stdio.h>
/*
 【案例2】
 美国街头采访:跟美女搭讪 要 手机号
 美女 要求 猜猜 她的年龄是多少? 最多有三次机会。
 如果猜对了 那么 给他电话
 */
#include  <stdlib.h>
int main(void)
{
	/*
	 分析:1.事先 随机给美女一个年龄20-29之间
		  2.小伙子 从 键盘输入 猜的 年龄 和 美女的年龄 比较
		  3.小伙子 有三次机会 这三次 过程 一样 
	 */
	unsigned int girlAge = arc4random()%10+20;
	printf("hi,美女 你的电话多少?\n");
	system("say hi,美女 你的电话多少?");
	printf("美女曰:先猜猜我的年龄吧\n");
	system("say 先猜猜我的年龄吧");
	int age;
	int tag = 0;//标记
	for (int i = 0;i < 3;i++) {
		printf("请输入你要猜的年龄:\n");
		scanf("%d",&age);
		if (age == girlAge) {
			tag = 1;
			printf("你太nb了,我的手机号是13838384438\n");
			system("say 你太nb了,我的手机号是13838384438");
			break;
		}else if (age > girlAge) {
			printf("哼,我有那么老吗?\n");
			system("say 哼,我有那么老吗?");
		}else {
			printf("你太坏了,太会说话了\n");
			system("say 你太坏了,太会说话了");
		}
	}
	if (!tag) {
		printf("拜拜\n");
		system("say good bye");
	}
	return 0;
}







