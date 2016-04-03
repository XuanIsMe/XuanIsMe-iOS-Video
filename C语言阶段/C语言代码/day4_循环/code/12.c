#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	/*
	 爬山 重复 走台阶，假设有1000个台阶要走，当你 走到100个台阶的时候 电话来了，妈妈喊他回家吃饭。
	 */
	for (int i = 1;i <= 1000;i++) {
		printf("好不容易爬了%d个台阶\n",i);
		if (i == 100) {
			printf("你妈喊你回家吃饭\n");
			system("say 你妈 喊你 回家吃饭啦");
			break;//退出/跳出整个for(){} 执行 for{}外面的语句
		}
	}
	printf("回家吃饭\n");
	system("say 回家吃饭啦");
	return 0;
}

