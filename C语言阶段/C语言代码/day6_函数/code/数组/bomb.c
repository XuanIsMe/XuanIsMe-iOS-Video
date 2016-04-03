#include <stdio.h>

#include <stdlib.h>
//扫雷
void bomb(void) {
	/*
	 定义数组
	矩阵用二维的
	 */
	int a[5][5] = {};//存放整个扫雷的图形
	int b[5][5] = {};//记录坐标 是否输入过 1表示输入过 0 没有
	/*
    int number;//雷数
    while(1) {
        printf("请输入雷的个数(1-24)\n");
        scanf("%d",&number);
        if (number >= 1&&number <= 24){
            //雷数正确
            break;
        }
    }*/
    int number;
INPUTLABEL://标签
    printf("请输入雷的个数(1-24)\n");
    scanf("%d",&number);
    if (number < 1||number > 24){
        //雷数不正确
        printf ("雷数有误\n");
        goto INPUTLABEL;//跳转到 INPUTLABEL 标签的位置
    }
    //布雷
    /*
     11211
     2@3@1
     2@422
     123@1
     01@21
     */
    int x;
    int y;
    for (int i = 0; i < number; i++) {
        //随机产生 各不相同的 number 雷的坐标
        //0 -- number-1
        x = arc4random()%number;
        y = arc4random()%number;
        if (a[x][y] != '@'-'0') {//表示存的雷
            a[x][y] = '@'-'0';//布雷
            //遍历每个雷的周围 8个 方向 九宫格 雷数+1
            /*
             11211
             2@3@1
             2@422
             123@1
             01@21
             */
            for (int m = x-1;m <= x+1;m++ ) {
                for (int n = y-1;n <= y+1;n++) {
                    //不是雷 而且没有越界都要 雷数+1
                    if (m<0||m>4||n<0||n>4||a[m][n] == '@'-'0') {
                        //越界 和 有雷 都不+1
                    }else {
                        a[m][n]++;//雷数+1
                    }
                }
            }
        }else {
            i--;//坐标重复了 i-- 保证 number 个 不同的雷
        }
    }
    //循环 打印图形
    int cnt = 0;//记录正确输入不同坐标的个数
    int winOrLose = 0;// -1 表示败 1 表示赢
    
    while (1) {
        //打印图形
        //\t 制表符 tab键
        system("clear");
        for (int i = 0; i < 5; i++) {
            for (int j = 0;j < 5;j++) {
                if (b[i][j] == 1||winOrLose == -1) {//失败了也要全部打印
                    //输入过
                    printf ("%c(%d,%d)\t",a[i][j]+'0',i,j);
                }else {
                    //表示这个坐标没有输入过
                    printf ("?(%d,%d)\t",i,j);
                }
            }
            printf ("\n");
        }
        if (winOrLose == -1) {
            break;//失败 退出循环
        }
        
        int bombX,bombY;
        printf ("请输入不是雷的坐标:输入格式 2 4\n");
        scanf("%d%d",&bombX,&bombY);
        
        if (a[bombX][bombY] == '@'-'0') {//判断是否是雷
            //是雷 失败
            winOrLose = -1;//-1失败
            continue;
        }
        if (b[bombX][bombY] == 0) {
            b[bombX][bombY] = 1;//记录 这个坐标输入了
            cnt++;//记录输入正确个数
        }
        if (cnt == 25-number) {//正确坐标个数
            winOrLose = 1;//表示赢了
            break;
        }
    }
    if (winOrLose == 1) {
        printf ("小样,可以呀，技术不错！\n");
    }else {
        printf ("小样，你的游戏是 语文老师教的吧!\n");
    }

}
int main(void)
{
	bomb();//调用函数
	return 0;
}





