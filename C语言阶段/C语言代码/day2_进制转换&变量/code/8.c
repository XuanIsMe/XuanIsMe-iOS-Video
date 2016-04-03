#include <stdio.h>
//字符

//'a'
int main(void)
{
	//	'a' 字符常量a
	//计算 存放字符 要按照 一定的 编码格式 进行 存储
	//英文字符 用 ASCII 码 存放
	//汉字 等其他国家 字符 用 万国码 Unicode 码存储
	//字符 都要 ''括起来
	//'aa' 错
	//'\n' 转义字符 换行
	//' ' 空格 字符
	//'\t' 制表符

	char c = 'a';//编译器 看到了 'a'就是 看到了'a'的ASCII码值 97
	
	printf("sizeof_char:%lu\n",sizeof(c));//1
	
	printf("c:%c\n",c);//按 字符 读
	printf("c:%d\n",c);//按 整型数字读
	//不看 怎么存 只看 怎么读

	c = 97;
	printf("c:%c\n",c);//按 字符 读
	printf("c:%d\n",c);//按 整型数字读

	/*
		//字符类型 就是 整数类型
		'a'  97
		'A'  65
		'a'-'A' = 32
		思考 0 和 '0'一样吗?
		字符'0' 怎么转 数字0
		
	*/
	return 0;
}
