#include <stdio.h>
/*
 
 1.编写一个测试标准身高体重的程序。
 计算公式：
 男人 标准体重（kg） = 身高（cm） - 105；
 女人 标准体重（kg）= 身高（cm）- 100；
 
 项目要求：
 
 启动程序，文字提示选择性别。switch
 （1）男性    （2）女性
 
 文字提示，输入身高和体重。
 
 用户输入之后，输出标准体重
 
 给出评价： if
 //真实体重/标准体重—》比例
 
 标准体重60%以下 严重营养不良
 标准体重60%~80% 中度营养不良
 标注体重80%~90% 轻度营养不良
 标准体重90%~110% 正常
 标准体重110% ~ 120% 轻度肥胖
 》标准体重120% 肥胖
 */
int main(void)
{
    //声明身高，体重和接受选择的变量。
    int male;
    float tall, weight;
    float stdWeight = 0;
    int isQuit;
    while (1) {
		printf("是否继续?1.是0.否\n");	
		scanf("%d",&isQuit);	
		if(isQuit == 0){
			break;//循环中遇到break，结束整个循环/退出整个循环，跳出整个循环
			//break 跳出包含break 的循环  
		}
        //提示
        printf("请选择性别:\n");
        printf("(1)男性 (2)女性\n");
        scanf("%d", &male);
        
        printf("请输入身高(cm)和体重(kg):\n");
        scanf("%f%f", &tall, &weight);
        
        //计算出标准身高
        switch (male) {
            case 1://男
                stdWeight = tall - 105;
                break;
            case 2://女
                stdWeight = tall - 100;
                break;
        }
        
        printf("您的身高为%.2f.理想的体重为%.2f.\n", tall, stdWeight);
        //计算比例
        float sub = weight / stdWeight * 100;
        
        if(sub < 60){
            printf("严重营养不良\n");
        }else if(sub < 80){
            printf("中度营养不良\n");
        }else if(sub < 90){
            printf("轻度营养不良\n");
        }else if(sub < 110){
            printf("正常\n");
        }else if(sub < 120){
            printf("轻度肥胖\n");
        }else{
            printf("肥胖\n");
        }
        
    }

	return 0;
}
