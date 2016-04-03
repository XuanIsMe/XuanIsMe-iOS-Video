//
//  main.c
//  ZZ1522000LvZhiXuan
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 吕志轩. All rights reserved.
//

#include <stdio.h>

#include <string.h>
#include <stdlib.h>
//字符串练习
/*
 1.计算两个字符串所表示数字的和(10分)
 传入:"123"  "459"
 返回:582
 */
int sumOfStringNumber(const char * s1, const char * s2);
int sumOfStringNumber(const char * s1, const char * s2) {
    return atoi(s1)+atoi(s2);
}

/*
 2.实现函数，传入一个字符串，返回英语字母出现的次数(15)
 //str 字符串参数
 //返回值是英语字母个数
 */
//"123hello123hello"
int countOfAlphaInString(const char * str);
int countOfAlphaInString(const char * str) {
    int cnt = 0;
    for (int i = 0; i < strlen(str);i++ ) {
        if ((str[i] >= 'a'&&str[i] <= 'z')||(str[i] >= 'A'&&str[i] <= 'Z')) {
            cnt++;
        }
    }
    return cnt;
}


/*3.判断是否是一个合法的手机号，是返回1，不是返回0 （10分）
 要求:手机号以1开头总共有11位 并且手机号中不能有除了数字以外的其他字符
 比如: 13812345678 是手机号
 188a1234567 不是手机号
 01381234567 不是手机号
 188123456789 不是手机号
 18912345    不是手机号
 */
int isPhoneNumberOfString(const char * phoneNumber);


//4.返回字符串s2在字符串s1中出现的次数。(15分)
//如s1为"drink your drink!" s2为"drink"
//返回值是2
int numOfStr(const char * s1, const char * s2) ;
int numOfStr(const char * s1, const char * s2) {
    int cnt = 0;
    
    while (1) {
        //hello drink your drink!
        char *ret = strstr(s1, s2);
        if (ret == NULL) {//NULL表示没有了 没有找到
            break;
        }
        cnt++;
        //找到一个单词 之后 从这个单词后面继续找有没有这个单词
        s1 = ret+strlen(s2);//下次 从找到的单词后面
    }
    return cnt;
}

/*5. 输入一段字符串，已知字符串只由字母和空格构成，每两个单词间有一个或多个空格，统计其中的单词个数 (10分)
 比如：传入 "  welcome to     qianfeng  "  返回:3
 */
size_t countOfWordInString(const char * str);
size_t countOfWordInString(const char * str) {
    //分割 要修改字符串 所以要用 字符数组
    char c[256] = {};
    strcpy(c, str);//必须要进行拷贝到可变的字符数组中
    int cnt = 0;
    //第一次分割
    char *ret = strtok(c, " ");
    cnt++;//分割出第一个
    
    while (1) {
        ret = strtok(NULL, " ");
        if (ret == NULL) {
            break;
        }
        cnt++;
    }
    
    return cnt;
}


//6.把字符串中的字母大小写反转(15分)
//将字符数组s中每个字母大写变成小写，小写变成大写，其他字符不动。
//并非打印转变后的字符串，而是在原可变字符串上直接修改s
//打印翻转后结果不得分
void reversalUpperAndLowerForString(char * s);


/*
 7.实现函数，传入两个字符串，找出第二个字符串在第一个字符串中最后出现的位置(15)
 //s1 第一个字符串
 //s2 第二个字符串
 //返回值是第二个字符串在第一个字符串中最后一次出现的位置
 */
char * lastStrStr(const char * s1, const char * s2);


/*
 8.找出出现最多的字母 (10分)
 找出字符串中出现次数最多的字母，将该字母和字母出现的次数拼接成一个新字符串
 通过参数but和返回值返回新字符串。
 传入:"WelcomeToQianfeng"  buf(字符数组地址)
 返回:"e3"
 */
const char * mostAlphaInString(const char * string, char * buf);

//9.传入两个表示整数的字符串，已知字符串不超过5个字符，而且全是数字字符，比较两个字符串所表示数字的大小。(15分
//s1更大返回1，s2更大返回2。相等返回0。
// 传 "123" "99"  --> 返回1
// 传 "22"  "120"  ->返回2
int numstrcmp(const char * s1, const char * s2);

/*
 10.将字符中单词用空格隔开(15分)
 已知传入的字符串中只有字母，各单词由全大写，全小写交替出现组成，试将每个单词隔开，
 保留第一个单词首字母大写，其他单词全小写。
 
 传入:"HelloMyDearWorld"
 
 打印:"Hello my dear world"
 */
void separateString(const char * str);

/*
 11.实现函数，找出出现最多的单词 (15分)
 已知字符串中的单词以空格隔开，找出字符串中出现次数最多的单词，将该单词和单词出现的次数
 拼接成一个新字符串，返回新字符串。
 传入:"drink your drink don't drink others drink"
 打印:"drink4"
 */
void mostWordInString(const char * string);


/*
 12 传入一段字符串，把相同的字符按出现顺序，归在一起，并压缩(20分)
 比如：
 输入 SamSameCome
 输出：
 S2a2m3e2C1o1
 返回值为压缩后的结果S2a2m3e2C1o1
 */
char * compressString(char * s);



int main(int argc, const char * argv[]) {
    printf("%d\n",sumOfStringNumber("123", "123"));
    printf("%d\n",countOfAlphaInString("123dgjkadg123"));
    printf("%lu\n",countOfWordInString("   I am a good       man "));
    printf("%d\n",numOfStr("hel hello wll hello l hello", "hello"));
    return 0;
}
