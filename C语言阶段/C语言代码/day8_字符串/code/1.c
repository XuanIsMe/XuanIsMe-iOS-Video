#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[256] = "helloworld"; 
	printf("%lu\n",strlen(c));
	int a[2222] = {};
	printf("%lu\n",sizeof(a));
	return 0;
}

