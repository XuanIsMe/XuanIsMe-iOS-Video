#include <stdio.h>
/*
 Switch - case
 
 switch (整型表达式) {
    case 整型常量1:
        语句块1;
    case 整型常量2:
        语句块2;
    case 整型常量3:
        语句块3;
        ...
    default:
        语句块n;
 }
 //执行过程:判断整型表达式的值，如果表达式的值是整型常量1那么代码跳到整型常量1的位置开始依次执行下面的所有语句，如果表达式的值是整型常量2的值，那么直接跳到整型常量2的位置，开始执行下面的语句以此类推 ，如果在case中没有找到 相应的值，跳到default的位置，执行下面的语句

 */
int main(void)
{
	int day;
	scanf("%d",&day);
/*
	if(1 == day) {
		printf("星期一\n");
	}else if (2 == day) {
		printf("星期二\n");
	}else if (3 == day) {
		printf("星期三\n");			    
	}else if (4 == day) {
	    printf("星期四\n");	    
	}else if (5 == day) {
	    printf("星期五\n");
	}else if (6 == day ) {
		printf("星期六\n");
	}else if (7 == day) {
		printf("星期天\n");
	}else {
		printf("error\n");
	}
*/
	//day 的值 和 case 后面的整型常量 一样 那么就跳到那个case 地方 执行下面的语句
	switch (day) {
		case 1:
			printf("星期1\n");
		case 2:
			printf("星期2\n");
		case 3:
			printf("星期3\n");
		case 4:
			printf("星期4\n");
		case 5:
			printf("星期5\n");
		case 6:
			printf("星期6\n");
		case 7:
			printf("星期7\n");
		default:
			printf("error\n");
	}
	
	return 0;
}









