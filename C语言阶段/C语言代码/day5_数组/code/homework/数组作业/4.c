#include <stdio.h>
/*
 //8.输入一串小写字母（以"."为结束标志），统计出每个字母在该字符串中出现的次数(若某字母不出现，则不要输出)。

 */

int main(void)
{
   //26个小写字母统计
    int count[26] = {};
    char c;
    while (1) {
        scanf("%c",&c);
        if (c == '.') {
            break;
        }
        /*
        if (c == 'a') {
            count[0]++;//count['a'-'a']++;
        }else if (c == 'b') {
            count[1]++;//count['b'-'a']++;
        }*/
        count[c-'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("%c:%d\n",'a'+i,count[i]);
        }
    }
    
    
    
	return 0;
}
