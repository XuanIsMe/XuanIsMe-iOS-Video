#include <stdio.h>
/*
//10.求一个数二进制1的个数
*/
int main(void)
{
    int n;
    scanf("%d",n);
    int ret;
    int count = 0;
    while (n) {
        ret = n%2;
        if (ret == 1) {
            count++;
        }
        n /= 2;
    }
    printf("count:%d\n",count);
    
	return 0;
}
