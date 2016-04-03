//
//  main.c
//  C17_字符串查找strstr
//
//  Created by lzxuan on 15/12/30.
//  Copyright © 2015年 lzxuan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    /*
     strstr:字符串查找
     */
    //查找长串（第一个） 中 是否 包含子串(第二个) 如果找到 返回 第一次找到的子串在长串的地址
    
    char *ret = strstr("Iloveios!ioshateyou", "ios");
    printf("ret = %s\n",ret);
    printf("ret = %p\n",ret);
    
    ret = strstr("Iloveios!ioshateyou", "android");
    //找不到返回NULL NULL 就是地址0 空
    
    if (ret != NULL) {
        printf("ret = %s\n",ret);
        printf("ret = %p\n",ret);
    }
    
    
    
    
    return 0;
}









