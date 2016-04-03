//
//  main.c
//  C7_函数&字符数组练习
//
//  Created by lzxuan on 15/12/28.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>


/*
 1.
	传入一个字符串，求这个字符串的长度
	比如 传入 “hello” 打印5
	
 2.	传入两个字符串比较两个字符串的大小(依次比较两个字符串的对应的字符)
	比如 传入 “hello” “hello” 打印 hello 等于 hello
	比如 传入  “hello”  “hallo”打印 hello 大于 hallo
	比如 传入  “hello”  “hfllo”打印 hello 小于 hfllo
 
 3.传入一个数字字符串 将其转化为 一个真正的整数 并打印
	比如传入 字符串 “123” 得到 一个 真正的 数字123 (这个是数字一百二十三)
 
 
 4.判断是否是一个合法的手机号，是打印1，不是打印0
	要求 传入 一个字符串 进行判断是否是一个手机号。
 要求:手机号以1开头总共有11位 并且手机号中不能有除了数字以外的其他字符
 比如: 13812345678 是手机号
 188a1234567 不是手机号
 01381234567 不是手机号
 188123456789 不是手机号
 18912345    不是手机号
 
 
 5. 传入一段字符串，已知字符串只由字母和空格构成，每两个单词间有一个或多个空格，统计其中的单词个数
 比如：传入 "welcom to     qianfeng"  打印 3
 
 
 6.传入 两个字符串  第一个长字符串 第二个 短字符串 ，打印 短字符串在长字符串中出现的次数。
 比如 传入 “I love you,you love me too!”  “love”  出现2次
 
 
 7.找出出现最多的字母
 找出字符串中出现次数最多的字母，将该字母和字母出现的次数拼接成一个新字符串
 
 传入入:"WelcomeToQianfeng"  打印 e3 (字符e出现3次 最多)
 
 
 8.已知传入的字符串中只有字母，各单词由全大写，全小写交替出现组成，试将每个单词隔开，
 保留第一个单词首字母大写，其他单词全小写。
 
 传入:"HelloMyDearWorld"
 打印:"Hello my dear world"
 
 9.
 传入一段字符串，把相同的字符按出现顺序，归在一起，并压缩
 比如：
 传入 SamSameCome
 输出：
 S2a2m3e2C1o1
 打印为压缩后的结果S2a2m3e2C1o1

 */
//第一题
int myStringLength(char arr[]);
//参数 写成char arr[];函数内部 就可以把arr当做 字符数组 用
int myStringLength(char arr[]) {
    int cnt = 0;
    //字符串 最后 必须要有\0
    for (int i = 0; arr[i] != '\0'; i++) {
        cnt++;
    }
    return cnt;
}

int main(int argc, const char * argv[]) {
   
    char a[] = "helloxzxxxx";//字符串 最后 有\0
    int len = myStringLength(a);//传数组名
    printf("len:%d\n",len);
    
    return 0;
}
