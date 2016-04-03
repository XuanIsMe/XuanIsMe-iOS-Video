#include <stdio.h>
/*
 13.有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
*/
int main(void)
{
    //假设有6个元素
    //int a[6] = {1, 3, 5, 7, 9};
    int a[6] = {9,7,5,3,1};
    int n;
    //	1 1 3 5 7 9
    printf("请输入插入的数:\n");
    scanf("%d", &n);
    //	n == 6
    //	n == 0
    int isAscending;//1 升序 0降序
    if (a[0] > a[1]) {
        isAscending = 0;
    }else {
        isAscending = 1;
    }
    //1 3 5 7 9 0
    int i;//在外 定义 i
    for(i = 6-1-1; i >= 0; i--){
        if (isAscending) {//升序
            if(n > a[i]){
                break;
            }else{
                a[i + 1] = a[i];
            }
        }else {//降序
            if(n < a[i]){
                break;
            }else{
                a[i + 1] = a[i];
            }
        }
    }
    a[i+1] = n;
    
    
    for(int j = 0; j < 6; j++){
        printf("%d ", a[j]);
    }
    printf("\n");

	return 0;
}
