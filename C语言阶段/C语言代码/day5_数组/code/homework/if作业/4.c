#include <stdio.h>
/*
	16	选择和判断(判断水仙花数)	判断一个三位数是否是水仙花数,如果是,输出YES,如果不是,输出NO
说明: 水仙花就是一个数的每个数字的立方和等于它本身的数, 例如 153就是一个水仙花数 1*1*1+5*5*5+3*3*3=153
*/
int main(void)
{
	int num;
	scanf("%d",&num);
	if(num>=100&&num<=999) {
		//语句块 可以是任何语句
		//个位
		int bit0 = num%10;
		//十位
		int bit1 = num/10%10;
		//百位
		int bit2 = num/10/10%10;
		if (bit0*bit0*bit0+bit1*bit1*bit1+bit2*bit2*bit2 == num) {
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else {
		printf("NO\n");
	}




	return 0;
}
