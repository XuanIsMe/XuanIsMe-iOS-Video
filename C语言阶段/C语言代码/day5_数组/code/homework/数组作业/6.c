#include <stdio.h>
/*
 12.
 有n个人围成一圈，顺序排号。从第一个人开始报数（从1到m报数），凡报到m的人退出圈子，问最后留下的是原来第几号的哪位。（*****）
 
  int a[256] = {};
  
  0 0 0 1 0
 
 */
int main(void)
{
    int person[256] = {};
    int n,m;
    scanf("%d%d",&n,&m);
    
    //用 1 表示这个人 在
    for (int i = 0; i < n; i++) {
        person[i] = 1;// n 个人
    }
    
    int removePerson = 0;//记录移除的人
    int count = 0;//报数
    int j = 0;
    // 1 1 0 1 1
    while (removePerson != n-1) {//离开的人数 恒等于n-1 结束
        if (person[j] == 1) {//人在
            count++;//报数 +1
            if (count == m) {
                count = 0;//清零
                removePerson++;//离开的人数+1
                person[j] = 0;//置为0表示离开
            }
        }
        j++;//下一个人
        if (j == n) {//一轮报数 结束
            j = 0;//从第0个在接着报
        }
    }
    
    for (int index = 0; index < n; index++) {
        if (person[index] == 1) {
            printf("第%d个留下了\n",index+1);
        }
    }
    

	return 0;
}






