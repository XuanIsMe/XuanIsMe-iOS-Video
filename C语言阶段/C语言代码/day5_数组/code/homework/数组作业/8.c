#include <stdio.h>
/*
 14. 输入一个由10个整数组成的序列，其中序列中任意连续三个整数都互不相同，求该序列中所有递增或递减子序列的个数。
 　　例如：
 　　输入：1　10　8　5　9　3　2　6　7　4
 　　输出：6
 　　输出对应的递增或递减子序列为：
 　　1　10
 　　10　8　5
 　　5　9
 　　9　3　2
 　　2　6　7
    7　4
*/
int main(void)
{
    int a[10] = {};
    int i, cnt = 1;
    
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    
    printf("%d ", a[0]);//先把第0个打印出来
    for(i = 1; i <= 8; i++){//从第1个开始遍历到倒数第二个
        printf("%d ", a[i]);
        if((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1])){
            printf("\n%d ", a[i]);
            cnt++;//计数
        }
    }
    printf("%d\n", a[9]);
    printf("cnt:%d\n", cnt);

	return 0;
}
