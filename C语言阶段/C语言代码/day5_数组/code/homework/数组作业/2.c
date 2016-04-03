#include <stdio.h>
/*
 4.	数组（求最大值及下标）	定义一个整型数组，输入10个整数到数组中，并将数组中最大值及下标输出。
 例如：
 输入： 3 5 2 9 1 8 7 4 6 0
 输出： 9 3
 
*/
int main(void)
{
    int a[10] = {};
    for (int i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }
    //假设 a[0]最大
    int max = a[0];
    int index = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] > max) {//比max 大 更新max
            max = a[i];
            index = i;//记录索引
        }
    }
    printf("max：%d index：%d\n",max,index);

	return 0;
}
