//
//  atm.c
//  ATM
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include "atm.h"

#include <string.h>
#include <stdlib.h>
//定义 全局变量
//全局的数组(不初始化默认都是0)
//保存 注册的名字和密码
char name[256];
char passwd[256];
//余额
double balance;

void systemSayString(const char *s) {
    char buff[256] = "say ";
    strcat(buff, s);
    system(buff);
}

//注册信息
void registerInfo(void) {
    printf("请输入用户名\n");
    systemSayString("请输入用户名");
    scanf("%s",name);
    printf("请输入密码\n");
    systemSayString("请输入密码");
    scanf("%s",passwd);
    printf("亲!恭喜你注册成功\n");
    systemSayString("亲!恭喜你注册成功,成为我们的会员");
}
//登陆
void login(void) {
    if (!strlen(name)) {//检测是否长度为0，如果是0那么未注册
        printf("您还未注册,请先注册\n");
        systemSayString("您还未注册请先注册");
        printf("哥!慢慢来\n");
        return;
    }
    
    char loginName[256] = {};
    char loginPasswd[256] = {};
    int count = 0;
INPUTLABEL:
    //每次重新清零
    memset(loginName, 0, 256);
    memset(loginPasswd, 0, 256);
    printf("请输入用户名\n");
    systemSayString("请输入用户名");
    scanf("%s",loginName);
    printf("请输入密码\n");
    systemSayString("请输入密码");
    scanf("%s",loginPasswd);
    
    if (strcmp(loginName, name)==0&&strcmp(passwd, loginPasswd)==0) {//判断是否相等
        printf("恭喜你登陆成功!\n");
        systemSayString("恭喜你登陆成功!");
        //调用操作函数
        selectOperate();
    }else{
        printf("用户名或密码输入有误\n");
        systemSayString("用户名或密码输入有误");
        count++;
        if (count == 3) {
            printf("输入错误已经三次，银行卡账户已被锁定，请于银行工作人员联系!\n拜拜\n这卡是你的吗?\n");
            systemSayString("输入错误已经三次，银行卡账户已被锁定，请于银行工作人员联系!拜拜！这卡是你的吗?");
            exit(1);//结束程序
            //return 结束当前函数 exit 结束整个程序
        }
        goto INPUTLABEL;//跳转
    }
}
//登出
void logout(void) {
    printf("拜拜\n");
    systemSayString("拜拜");
    exit(0);//正常结束
}
//选择操作内容
void selectOperate(void) {
    int num;
    while (1) {
        printf("*********\n");
        printf("1.存款\n");
        printf("2.查询余额\n");
        printf("3.取款\n");
        printf("4.退出\n");
        printf("*********\n");
        scanf("%d",&num);
        switch (num) {
            case 1:
                saveMoney();//存钱
                break;
            case 2:
                seeBalance();//查看
                break;
            case 3:
                drawMoney();//取钱
                break;
            case 4:
                logout();//结束
                break;
                
            default:
                printf("输入有误\n");
                break;
        }
    }

}
//存款
void saveMoney(void) {
    float money;
    printf("亲!请输入存款金额\n");
    systemSayString("亲!请输入存款金额");
    scanf("%f",&money);
    balance += money;
}
//取款
void drawMoney(void) {
    float money;
    printf("请输入取款金额\n");
    systemSayString("请输入取款金额");
    scanf("%f",&money);
    if (money > balance) {
        printf("余额不足,注意点没钱不要当大爷\n");
        systemSayString("余额不足,注意点没钱不要当大爷");
        return;
    }
    balance -= money;
}
//查询余额
void seeBalance(void) {
    printf("当前余额:%.2f\n",balance);
    
    char buff[256] = {};
    //把一个格式化字符串 转变之后 放入 一个字符数组中
    sprintf(buff, "您当前余额为:%.2f元",balance);
    
    systemSayString(buff);
    
    if (balance > 1000) {
        printf("哥!你真有钱,你带我一起飞吧\n");
        systemSayString("哥!你真有钱,你带我一起飞吧");
    }else {
        printf("没钱就别出来混了\n");
        systemSayString("没钱就别出来混了");
    }
}
//用户界面
void userInterface(void) {
    while (1) {
        
        printf("*****************\n");
        printf("  1.登陆  2.注册 \n");
        printf("*****************\n");
        systemSayString("请选择");
        int num;
        scanf("%d",&num);
        switch (num) {
            case 1:
                login();//登陆
                break;
            case 2:
                registerInfo();//注册
                break;
                
            default:
                printf("输入有误\n");
                systemSayString("输入有误");
                break;
        }
    }

}