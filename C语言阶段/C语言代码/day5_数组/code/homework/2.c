#include <stdio.h>
/*
10.找出所有100以下的7的倍数。
11.从1打印到100，跳过所有7的倍数和带7的数。
	14 17 71...
*/
int main(void)
{
	for(int i = 1;i <= 100;i++) {//遍历1---100
		if (i % 7 == 0) {
			printf("%d\n",i);
		}
	}
	printf("--------------\n");
	for (int i = 1;i <= 100;i++) {
		//方法1:用continue
		if (i%7==0||i%10==7||i/10%10 == 7) {//个位 十位 是7 或者7的倍数
			continue;
		}		
		printf("%d\n",i);
	}
	//方法2：
	for (int i = 1;i <= 100;i++) {
        if (i%7==0||i%10==7||i/10%10 == 7) {//个位 十位 是7 或者7的倍数
            
        }else{
        	printf("%d\n",i);
		}
    }

		
	return 0;
}
