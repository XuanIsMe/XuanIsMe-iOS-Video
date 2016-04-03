#include <stdio.h>
/*
 26. switch 结构
 输入一个字母判断是星期几!（大小写匹配）
 
 T S 一个字母没法判断，这时需要输入第二个字母 再判断是星期几。
 MON TUS WED THU FRI STA SUN
 */
int main(void)
{
    char c;
    scanf ("%c",&c);
    //t换行
    /*
    char c1;
    scanf ("%c",&c1);//处理换行
    */
    getchar();
    
    switch (c) {
        case 'm':
        case 'M': {
            printf("星期一\n");
        }
            break;
        case 't':
        case 'T': {
            char c2;
            printf ("输入第二个字符:\n");
            scanf("%c",&c2);
            if (c2 == 'u'||c2 == 'U') {
                printf ("星期二\n");
            }else if (c2 == 'h'||c2 == 'H'){
                printf ("星期四\n");
            }else {
                printf("error\n");
            }
        }
            break;
        case 'w':
        case 'W': {
            printf("星期三\n");
        }
            break;
        case 'f':
        case 'F': {
            printf("星期五\n");
        }
            break;
        case 's':
        case 'S': {
            char c2;
            printf ("输入第二个字符:\n");
            scanf("%c",&c2);
            if (c2 == 'a'||c2 == 'A') {
                printf ("星期六\n");
            }else if (c2 == 'u'||c2 == 'U'){
                printf ("星期天\n");
            }else {
                printf("error\n");
            }
        }
            break;
            
        default:
            printf ("error\n");
            break;
            
    }

	return 0;
}
