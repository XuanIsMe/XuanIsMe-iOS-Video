#include <stdio.h>
/*
流程控制（数值比较2）	定义三个整型变量x,y,z，从键盘初始化变量值，判断三个变量的大小，将较大的值赋给变量max，将max输出,注意输入使用scanf输入 
*/
int main(void)
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int max;
	//首先比较前两个数
/*
//方法1
	if (x > y){
		max = x;
	}else{
		max = y;
	}//找到x y中较大的
	
	if (z > max){
		max = z;
	}
*/
//方法2：
	//用x y 中较大的一个和z再比较谁大
	max = (x>y?x:y)>z?(x>y?x:y):z;

	printf("%d\n",max);
	


	return 0;
}
