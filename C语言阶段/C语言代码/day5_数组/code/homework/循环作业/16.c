#include <stdio.h>
/*
 26.
 两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
 */
int main(void)
{
    //表示 三个人 变量a == 'x'表示 a和x进行比赛
	char a, b, c;
    
	for(a = 'x'; a <= 'z'; a++){
		for(b = 'x'; b <= 'z'; b++){
			for(c = 'x'; c <= 'z'; c++){
				if(a != b
				&& a != c
				&& b != c
				&& a != 'x'
				&& c != 'x'
				&& c != 'z'){
					printf("a vs %c\nb vs %c\nc vs %c\n", a, b, c);
				}
			}
		}
	}
	return 0;
}
