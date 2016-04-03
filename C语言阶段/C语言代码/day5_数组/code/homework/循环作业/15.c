#include <stdio.h>
#include <stdlib.h>
/*
 7.
 
 n奇数
 n行
 + + # + +
 
 + # + # +
 
 # + + + #
 
 + # + # +

 + + # + +
 
 什么打印'#'
 当点的坐标 到 中心点 的水平方向距离 和竖直方向距离和 == n/2的时候打印‘#’
 
 */
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    //中心点 就是 (n/2 n/2)
    for (int x = 0 ; x < n; x++) {
        for (int y = 0; y < n; y++) {
            if (abs(x-n/2)+abs(y-n/2) == n/2) {
                printf("#");
            }else {
                printf("+");
            }
        }
        printf ("\n");
    }
    
 
    return 0;
}



