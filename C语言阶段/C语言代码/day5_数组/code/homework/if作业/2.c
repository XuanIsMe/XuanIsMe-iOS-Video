#include <stdio.h>
/*
5	流程控制（月份天数判断）	输入一个月数，然后输出对应月份有多少天（不考虑闰年），将天数输出,注意输入使用scanf输入 
\
比如：
\
\	输入 6  输出为30
\
\	输入 2  输出为28
\
*/
int main(void)
{
	int month;
	scanf("%d",&month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31天\n");
            break;
        case 2:
            printf("28天\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30天\n");
            break;
            
        default:
            printf ("error\n");
            break;
    }
	return 0;
}
