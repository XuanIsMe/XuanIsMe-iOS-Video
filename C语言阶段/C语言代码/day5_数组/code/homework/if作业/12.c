#include <stdio.h>
/*
 27.
 输入一个日期（2013 1 1） 输出这一天是这一年的第几天；(输出：这是2013年的第1天)
 提示：
 ***************
 闰年：可以整除4并且不能整除100；或者可以整除400；闰年2月有29天；平年28天；
 1 3 5 7 8 10 12 有31天
 4 6 9 11 有30天
 */
int main(void)
{
	
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);

	//设置一个标记
	int tag = 0;
	//判断闰年
	if ((year%4==0 && year%100!=0)||(year%400==0)) {
		tag = 1;//1 闰年
	}else {
		tag = 0;//0 表示平年
	}	
	
	int days = 0;
	//days 目标结果
	switch (month) {
		case 12:
			days += 30;
		case 11:
			days += 31;
		case 10:
			days += 30;
		case 9:
			days += 31;
		case 8:
			days += 31;
		case 7:
			days += 30;
		case 6:
			days += 31;
		case 5:
			days += 30;
		case 4:
			days += 31;
		case 3:
		/*
			if(tag == 1){
				days += 29;
			}else{
				days += 28;
			}
		*/
			days += 28+tag;
		case 2:
			days += 31;
			
	}
	//加几号
	days += day;
	
	printf("%d年%d月%d号是第%d天\n",year,month,day,days);



	return 0;
}
