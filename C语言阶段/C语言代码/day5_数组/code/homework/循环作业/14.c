#include <stdio.h>
/*
 4.
 //打印出a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
 比如
 输入 2  5
 打印输出:2+22+222+2222+22222 = 24690
 */
int main(void)
{
    int n;
    int m;
    scanf("%d%d",&n,&m);
    int sum = 0;
    int tmp = n;
    /*
     2-->2
     22-->2*10+2
     222-->22*10+2
     2222-->222*10+2
     */
    //tmp 是加数
    for (int i = 0; i < m; i++) {
        if (i == m-1) {//最后一次
            printf("%d",tmp);
        }else{
            printf("%d + ",tmp);
        }
        sum = sum + tmp;
        tmp = tmp*10+n;
    }
    printf("= %d\n",sum);


	return 0;
}
