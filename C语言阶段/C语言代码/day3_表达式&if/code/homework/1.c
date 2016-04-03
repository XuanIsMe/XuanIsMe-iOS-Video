#include <stdio.h>
/*
 13. 输入一个四字节单词并打印这四字节单词。
	
 16. 一支部队里需要一套口令加密解密程序，长官启动加密程序，输入四字母指令，得到四个其他的字母。加密后的		字母传递到士兵手中，士兵启动解密程序，输入加密后的指令，即可得到正确指令。为他们设计一套系统，完成上			述功能。
 */
void test13(void) {
	//连续定义 变量
	char c1,c2,c3,c4;
	
	scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
	printf("%c%c%c%c\n",c1,c2,c3,c4);
	//make换行
	//注意 空格 和 换行 也是字符
}
void test16(void) {
	char c1,c2,c3,c4;
	printf("长官请输入指令\n");
	scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
	int key;
	printf("长官请输入加密秘钥\n");
	scanf("%d",&key);
	
	char newC1,newC2,newC3,newC4;
	//进行加密 
	newC1 = c1+key;
	newC2 = c2+key;
	newC3 = c3+key;
	newC4 = c4+key;
	
	printf("士兵请输入解密秘钥\n");
	int key2;
	scanf("%d",&key2);
	//解密 
	printf("解密之后的指令:%c%c%c%c\n",newC1-key2,newC2-key2,newC3-key2,newC4-key2);

}
/*
   char c;
c = getchar();//getchar 功能 就是 从键盘获取一个字符 把字符给c

等价于
 scanf("%c",&c);
 */
void test16_2(void) {
/*
 输入格式
 长官请输入指令
 fire换行
 长官请输入加密秘钥
 a换行
 士兵请输入解密秘钥
 a换行
 注意处理换行
 */
	char c1,c2,c3,c4;
	printf("长官请输入指令\n");
	scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
	//fire换行
	/*
	char c;
	scanf("%c",&c);//多加一个scanf 处理 换行
	*/
	getchar();//接收一个字符 

	char key;
	printf("长官请输入加密秘钥\n");
	scanf("%c",&key);
	// a换行
	getchar();//处理换行

	char newC1,newC2,newC3,newC4;
	//进行加密 
	newC1 = c1+key;
	newC2 = c2+key;
	newC3 = c3+key;
	newC4 = c4+key;
	
	printf("士兵请输入解密秘钥\n");
	char key2;
	scanf("%c",&key2);
	//解密 
	printf("解密之后的指令:%c%c%c%c\n",newC1-key2,newC2-key2,newC3-key2,newC4-key2);

}
int main(void)
{
	//test13();
	//	test16();
	test16_2();
	return 0;
}

