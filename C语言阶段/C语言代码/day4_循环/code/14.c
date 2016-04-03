#include <stdio.h>
//连续播放【动画】
#include <unistd.h> //sleep usleep函数在这个头文件中声明了

#include <stdlib.h> //system 在里面 
int main(void)
{
	for(;;) {
		printf("  _\n");
		printf(" ( ))___\n");
		printf("<'_,_____)~~~~~~~~\n");
		printf(" //    \\\\ \n");
		//休眠0.1s
		usleep(100000);//使程序休眠指定 微秒 1s = 10^6 us
		// 清屏 
		system("clear");

		printf("  _\n");
		printf(" ( ))___\n");
		printf("<'_,_____)VVVV\n");
		printf(" \\\\  // \n");
		usleep(100000);
		//清屏	
		system("clear");
	}
	return 0;
}

