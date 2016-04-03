#include <stdio.h>
/*
 23	选择和判断(按顺序输出三个数)	输入三个数, 按从小到大的顺序输出

 a = 3  b = 5
 int tmp；
 tmp = a;
 a = b;
 b = tmp;
 //不用临时变量交换
 a = a+b;
 b = a-b;
 a = a-b;
 
 ========
 还可以
 a = a^b;
 b = b^a;
 a = a^b;
 */


int main(void)
{
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
    //冒泡
	//首先拿a 和b 比较 把大的放后面()
	if (a > b){
		//交换两个变量的值
		int tmp;//定义一个临时的中间变量
		tmp = a;//保存a的值
		a = b; 
		b = tmp;

		//tmp 的使用范围在包含tmp的{}内
	}
	//上面的做法可以保证b中存放的是a和b中的较大值
	//比较b和c
	//把较大的放c中
	if (b > c) {
		int tmp = b;
		b = c;	
		c = tmp;

	}
	//上面可以得到最大值 在c中
	//再次拿a和b比较
	if (a > b) {
		int tmp = a;//这里的tmp 和上面两个不是同一个tmp,tmp是局部变量
		a = b;
		b = tmp;

	}
	printf("%d-%d-%d\n",a,b,c);
	



	return 0;
}
