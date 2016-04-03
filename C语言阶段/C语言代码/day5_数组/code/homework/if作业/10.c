#include <stdio.h>
/*
 25	IP地址判断时候合法问题	输入一个IP地址，判断时候ip地址合法
 
 ip地址由4位0-255组成 中间使用 . 隔开
 \
 合法的ip地址是:
 21.45.34.112 是合法的
 第一位不能为全0
 0.45.34.112 是不合法的
 每一位不能超过255
 */
int main(void)
{
    int num1,num2,num3,num4;
    //格式:
    //这里的格式化字符串 ->数字.数字.数字.数字
    scanf("%d.%d.%d.%d",&num1,&num2,&num3,&num4);
    printf("%d %d %d %d \n",num1,num2,num3,num4);
    if ((num1>0&&num1<=255) &&
        (num2>=0&&num2<=255)&&
        (num3>=0&&num3<=255)&&
        (num4>=0&&num4<=255)) {//合法
        printf("合法\n");
    }else {
        printf("不合法\n");
    }
    
	return 0;
}
