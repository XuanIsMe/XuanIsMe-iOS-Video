#include <stdio.h>
/*
 3.求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
 a在1-9之间
 例如键盘 输入 2  5
 输出24690 （实际上就是2+22+222+2222+22222的和）
 (此时共有5个数相加)，几个数相加有键盘控制
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
    for (int i = 0; i < m; i++) {
        sum = sum + tmp;
        tmp = tmp*10+n;
    }
    printf("%d\n",sum);
    

	return 0;
}
