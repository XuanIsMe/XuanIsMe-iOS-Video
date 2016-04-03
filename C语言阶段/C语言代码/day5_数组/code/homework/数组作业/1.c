#include <stdio.h>
/*
 有一个数组b[5] = {1,2,3,4,5};把这个数组拷贝到另外一个数组int a[5]中；
*/
int main(void)
{
    int b[5] = {1,2,3,4,5};
    int a[5] = {};
    //a = b; 数组不能整体赋值  数组名是一个常量
    //只能一次对数组元素进行赋值
    //a[0] = b[0];
    for (int i = 0 ; i < 5; i++) {
        a[i]= b[i];
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n",a[i]);
    }


	return 0;
}
