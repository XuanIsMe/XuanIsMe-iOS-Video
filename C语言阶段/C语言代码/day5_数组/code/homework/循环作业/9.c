#include <stdio.h>
/*
 15.  输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
 */
int main(void)
{
    char c;
    int englishCnt = 0;
    int spaceCnt = 0;
    int numberCnt = 0;
    int otherCnt = 0;
    //932cve23445678gfd@#$%^&换行
    while ((c = getchar()) != '\n') {
        if ((c >= 'a'&&c <= 'z')||(c >= 'A'&&c <= 'Z')) {
            englishCnt++;
        }else if (c == ' ') {
            spaceCnt++;
        }else if (c >= '0'&&c <= '9') {
            numberCnt++;
        }else {
            otherCnt++;
        }
    }
    printf("字母:%d 空格:%d 数字字符:%d 其他:%d\n",englishCnt,spaceCnt,numberCnt,otherCnt);
    
	return 0;
}
