#include <stdio.h>

/*
 
gcc 编译(了解)
 .c的源文件  生成一个 可执行的程序
 
 
 【扩展内容】
 预处理
 把 .c文件转化为.i文件 （处理#开头的语句）
 gcc -o x.i -E x.c
 
 编译
 把.i  转化为 .s 文件  (把C语言程序代码转化为汇编代码)
 gcc -o x.s -S x.i
 
 汇编
 .s  转化为 .o文件 （把汇编代码 转为 机器码 0 和1）
 gcc -o x.o -c  x.s
 
 链接
 链接库 生成可执行程序
 gcc -o test x.o
 */
 

int main(void)
{
    printf("hello\n");
	return 0;
}




