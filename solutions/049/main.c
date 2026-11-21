/*
 * 标准答案：子串查找器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
int main(void){char text[300],key[100];printf("输入文本：");if(!fgets(text,sizeof text,stdin))return 1;printf("输入关键词：");if(!fgets(key,sizeof key,stdin))return 1;text[strcspn(text,"\r\n")]='\0';key[strcspn(key,"\r\n")]='\0';char *found=strstr(text,key);printf(found?"第一次出现位置：%td\n":"未找到，结果：-1\n",found?(ptrdiff_t)(found-text):0);return 0;}
