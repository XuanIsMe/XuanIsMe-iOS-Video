#include <stdio.h>
/*
//石头剪刀布
 1.题目要求:
 现在有两个角色 : 玩家(我), 电脑
 两个角色都可以出 0 == 石头 1 == 剪子  2 == 布 (用数字表示 石头剪刀布)
 由于我们不知道玩家和电脑到底出什么, 所以我们用0, 1, 2来代替石头/ 剪子 / 布
	2.游戏规则:
 石头 胜 剪刀
 剪刀 胜 布
 布   胜 石头
 玩家的出拳可以让用户自己输入
 电脑的出拳必须生产一个随机数, 如何生产随机数?
 
 3.结果
	将玩家的出拳和电脑的出拳进行比较, 得到比赛结果
 玩家胜
 电脑胜
 握手言和

*/

#include <stdlib.h>

int main(void)
{
    // 1.电脑出拳
    // arc4random_uniform(n)  生产一个随机数 0-(n-1)
    //随机出拳 0-2
    int computer =  arc4random_uniform(3);
    // 2.玩家出拳
    int player;
    printf("小样请出拳, 0代表石头, 1代表剪刀, 2代表布\n");
    scanf("%d", &player);
    // 3.比较电脑和玩家的出拳
    if (((0 == player)&&(1 == computer)) ||
        ((1 == player) && (2 == computer)) ||
        ((2 == player) && (0 == computer))) {
        printf("玩家获胜\n");
        system("say 玩家胜");
    }else if (((0 == computer)&&(1 == player)) ||
              ((1 == computer) && (2 == player)) ||
              ((2 == computer) && (0 == player))){
        printf("电脑获胜\n");
        system("say 电脑胜");
        
    }else{
        printf("握手言和\n");
        system("say 握手言和");
        
    }
    if (player == 0) {
        printf ("玩家:石头");
    }else if (player == 1) {
        printf ("玩家:剪刀");
    }else {
        printf ("玩家:布");
    }
    printf (" VS ");
    if (computer == 0) {
        printf ("电脑:石头");
    }else if (computer == 1) {
        printf ("电脑:剪刀");
    }else {
        printf ("电脑:布");
    }
    printf ("\n");
    

	

	return 0;
}
