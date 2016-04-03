//
//  main.c
//  C2_*p
//
//  Created by lzxuan on 15/12/29.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 3;
    int * p = &a;
    printf("p:%p\n",p);//%p的功能 把一个空间地址 按照 16进制显示
    printf("&a:%p\n",&a);
    
    /*
            高
     XXXX
     XXXX
     ----
     XXXX
     XXXX
     XXXX
     XXXX  1001
     ----
     XXXX
          低
     */
    printf("*p = %d\n",*p);
    *p = 100;//*p 就是 指针变量p 指向的 空间(寻址过程1.先找到p中存放的地址的位置,2.取指针指向的空间大小)
    printf("a = %d\n",a);
    
    char c = 'A';
    char *pChar = &c;
    *pChar = 'a';
    printf("c = %c\n",c);
    
    int b = 100;
    int *q = &b;
    int ** qq = &q;// 二级指针
    
    
    //qq才是指针变量 保存变量q空间的地址(地址类型 q的空间类型 + * --》int* * )
    //qq指向q
    
    printf("&b = %p\n",&b);
    printf("q = %p\n",q);//q中 存得就是 b的地址
    printf("*q = %d\n",*q);//*q 指向的是空间b
    printf("*qq = %p\n",*qq);//*qq 就是 qq指向的空间就是q
    printf("**qq =%d\n",**qq);//*qq 指向的就是q 。**qq 《=》*q《=》b
   
    
    
    
    return 0;
}
