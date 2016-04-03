#include <stdio.h>
#include <stdlib.h> //用库函数 system


int main(void)
{
	/*
	 记者采访100 只企鹅 每天 在干什么?
	 100只企鹅 都说 "吃饭 睡觉 打豆豆"
	 输出 100 只企鹅 说的话
	 */
	/*
	printf("吃饭 睡觉 打豆豆\n");
	printf("吃饭 睡觉 打豆豆\n");
	printf("吃饭 睡觉 打豆豆\n");
	printf("吃饭 睡觉 打豆豆\n");
	printf("吃饭 睡觉 打豆豆\n");
	printf("吃饭 睡觉 打豆豆\n");
	...
	//打印 100 次
	*/
	//上面 都是在做 重复的 内容 
	//这是 我们 可以 用 循环 结构 简化代码

	for (int i = 0;i <= 99;i++) {
		printf("记者问:你每天干嘛?\n");
		//system 函数 可以 执行终端命令
		system("say 你每天干嘛?");
		printf("企鹅:吃饭 睡觉 打豆豆\n");
		system("say 吃饭睡觉打豆豆");
	}


	return 0;
}

