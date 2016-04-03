//
//  atm.h
//  ATM
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#ifndef atm_h
#define atm_h

#include <stdio.h>


//注册信息
void registerInfo(void);
//登陆
void login(void);
//登出
void logout(void);
//选择操作内容
void selectOperate(void);
//存款
void saveMoney(void);
//取款
void drawMoney(void);
//查询余额
void seeBalance(void);
//用户界面
void userInterface(void);

#endif /* atm_h */
