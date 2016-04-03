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
	//如果 跳到一个case 地方执行下面的语句 不想执行其他case 语句 那么需要在当前 case 语句 最后 加上一个break
	//带 break switch 结构是 常用的
	switch (day) {
		case 1:
			printf("星期1\n");
			break;//遇到break 跳出 整个 switch {} 执行外面的语句
		case 2:
			printf("星期2\n");
			break;
		case 3:
			printf("星期3\n");
			break;
		case 4:
			printf("星期4\n");
			break;
		case 5:
			printf("星期5\n");
			break;
		case 6:
			printf("星期6\n");
			break;
		case 7:
			printf("星期7\n");
			break;
		default:
			printf("error\n");
	}
	
	return 0;
}









