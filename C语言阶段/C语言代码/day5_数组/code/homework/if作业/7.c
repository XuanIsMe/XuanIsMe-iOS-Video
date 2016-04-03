#include <stdio.h>
/*
 22	选择和判断(计算下一秒的时间)	输入一个时间, 输出时间的下一秒
 例如输入的是10 20 59, 表示是10点20分59秒, 下一秒就是10点21分00秒
 8 5 8     ->08:05:09
 18 15 8   ->18:15:09
 */
int main(void)
{
	int hour;
	int minute;
	int second;

	scanf("%d%d%d",&hour,&minute,&second);
    second++;
    
    if (second == 60) {
        second = 0;
        minute++;
        if (minute == 60) {
            hour++;
            minute = 0;
            if (hour == 24) {
                hour = 0;
            }
        }
    }
    
    printf("%02d:%02d:%02d\n",hour,minute,second);
	/*
     %02d -> 为一个数字 占 两位， 如果 不够两位 前面补0
     
     
     [UIImage imageNamed:@"%02d.png"];//01.png
     */

	return 0;
}



