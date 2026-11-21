/*
 * 标准答案：成绩等级转换
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { int s; printf("输入分数："); if(scanf("%d",&s)!=1||s<0||s>100){puts("分数应在0到100之间");return 1;} char g=s>=90?'A':s>=80?'B':s>=70?'C':s>=60?'D':'F'; printf("等级：%c\n",g); return 0; }
