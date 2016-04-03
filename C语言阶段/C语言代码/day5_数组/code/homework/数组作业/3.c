#include <stdio.h>
/*
 6.从键盘输入10个数存入数组，将这个数组逆序。（不是逆序输出）
 
 1 2 3 4 5 6  3 2 4 5
 
 数组真正逆序之后
 
 5 4 2 3 6 5 4 3 2 1
 */

int main(void)
{
    int a[10] = {};
    for (int i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",a[i]);
    }
    
    //数组逆序
    //第一个元素和最后一个元素交换  第二个和倒数第二个进行交换....
    for (int i = 0; i < 10/2; i++) {//交换
        int tmp = a[i];
        a[i] = a[10-1-i];
        a[10-1-i] = tmp;
    }
    
    printf("**************\n");
    //测试打印
    for (int i = 0; i < 10; i++) {
        printf("%d\n",a[i]);
    }
    

	return 0;
}
