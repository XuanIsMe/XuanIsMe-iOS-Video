#include <stdio.h>
/*
 13.   打印九九乘法表
1*1=1
2*1=2 2*2=4
3*1=3 3*2=6 3*3=9


9*1=9....

 */
int main(void)
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j<= i; j++) {
            printf("%d*%d=%2d ",i,j,i*j);
        }
        printf ("\n");
    }
    //%2d 占两位 右对齐 %-2d 占两位 左对齐

	return 0;
}
