#include <stdio.h>
//1. 封装一个函数，返回两个整数里的较大那个
int  maxOfNumber(int num1, int num2) {
/*
	if (num1>num2){
		return num1;
	}else{
		return num2;
	}
*/
	return num1>num2?num1:num2;
}

//2. 封装一个函数，返回两个浮点数里的较小那个
double  minOfNumber(double num1,double num2) {
	//两个浮点数是通过参数传进来的 通过return 返回结果
	return num1>num2?num2:num1;
}


//3. 封装一个函数，来判断一个字符是否是大写字母
  // 如果是，返回1,否则返回0!
int isMyUpper(char c) {
	//字符是通过参数c 传进来的 然后return 结果
	if(c>='A'&&c<='Z') {
		return 1;
	}else{
		return 0;
	}
}

//4. 封装一个函数，来判断一个字符是否是数字字符
   //如果是，返回1,否则返回0!
int isMyNumber(char c) {
	if(c>='0'&&c<='9'){
		return 1;
	}else {
		return 0;
	}
}

//5. 封装一个函数，来判断一个字符是否是英文字母
  // 如果是，返回1,否则返回0!
int isMyEnglish(char c) {
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		return 1;
	}else {
		return 0;
	}
}

//6. 封装一个函数，传入一个字符，如果是大写那么转化小写然后返回，否则保持不变返回
char toMyLower(char c) {
	/*
	if(c>='A'&&c<='Z') {
		return c+32;
	}else {
		return c;
	}*/
	int ret =isMyUpper(c);//在这里可以直接调用上面自定义的函数isMyUpper();
	if (ret){//ret == 1 
		return c+32;
	}else {
		return c;
	}
	
}

//7. 封装一个函数，实现将一个正整数，倒叙打印输出!
void reverse(int number) {
	//如果循环中 声明一个变量 那么实际上只定义了一次
	while(number) {
		int ret =number%10;
		printf("%d",ret);
		number /= 10;
	}
	printf("\n");
	return;
}
//一个程序只有一个main函数
//上面的所有自定义的函数 我们都可以在main 中进行调用测试
int main(void)
{
	//测试这些函数就需要调用
	double min = minOfNumber(1.23,3.14);
	printf("2->min:%f\n",min);
	printf("1->%d\n",maxOfNumber(100,10));
	
	int ret1 = isMyUpper('A');
	printf("ret1:%d\n",ret1);
	
	int ret2 = isMyNumber('1');
    printf("ret2:%d\n",ret2);
	
	printf("isEnglish:%d\n",isMyEnglish('X'));
	
	char c = toMyLower('A');
	printf("%c\n",c);

	reverse(1234);
	


	return 0;
}
