/*
 * 标准答案：回文短语检测
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[200];printf("输入短语：");if(!fgets(s,sizeof s,stdin))return 1;s[strcspn(s,"\r\n")]='\0';int l=0,r=(int)strlen(s)-1;while(l<r){while(l<r&&s[l]==' ')l++;while(l<r&&s[r]==' ')r--;if(tolower((unsigned char)s[l])!=tolower((unsigned char)s[r])){puts("不是回文短语");return 0;}l++;r--;}puts("是回文短语");return 0;}
