//
//  main.c
//  C1_ArraySort
//
//  Created by lzxuan on 15/12/28.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
//1.快捷方式
//隐藏/显示右导航区  command + option（alt）+ 0
//隐藏/显示左导航区 command + 0
//command + shift +y 显示隐藏调试区
//点击xcode 左上角的三角 (run-》编译并运行）
//编译运行代码 快捷方式 cmd + r

//设置xcode 字体--》偏好设置 fonts&color
//保护色 RGB -》R 199  G 237  B 204

/*
 选择
 int a[5] = {5，4，3，2，1};
 5 4 3 2 1
 //数组 进行升序排列
 依次始终拿每一个元素跟后面的元素依次进行比较，把大的放后面(如果 a[0] > a[j],a[0]和a[j]进行交换）；
 
 5   4   3   2   1
 第一轮:拿a[0]和后面的元素依次进行比较，把大的放后面 if a[0]>a[j] a[0]和a[j]的值交换
 1   5   4   3   2
 第二轮:拿a[1]和后面的元素依次进行比较，把大的放后面 if a[1]>a[j] a[1]和a[j]的值交换
 1   2   5   4   3
 第三轮:拿a[2]和后面的元素依次进行比较，把大的放后面 if a[2]>a[j] a[2]和a[j]的值交换
 1   2   3  5  4
 第四轮:拿a[3]和后面的元素依次进行比较，把大的放后面 if a[3]>a[j] a[3]和a[j]的值交换
 1  2   3   4  5

 */
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[5] = {50,4,30,25,1};
    //选择法排序
    //轮次 用一个循环
    int len = sizeof(a)/sizeof(a[0]);//求出数组元素个数
    
    for (int i = 0; i < len-1; i++) {//外循环控制轮次
        //拿a[0]  跟后面的比较 a[1] a[2]a[3]a[4]
        //拿a[1]  跟后面的比较a[2]a[3]a[4]
        //拿a[2]  跟后面的比较a[3]a[4]
        //  a[3]  跟后面的比较a[4]
        //内循环就是比较过程
        for (int j = i+1; j < len; j++) {
            if (a[i] > a[j]) {//左边大于右边  交换--》升序
                // a[i] < a[j] 交换的话是 降序
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d  ",a[i]);
    }
    printf("\n");
    
    
    return 0;
}
