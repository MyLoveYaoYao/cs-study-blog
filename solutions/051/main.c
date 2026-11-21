/*
 * 标准答案：指针交换练习
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
void swap_int(int *a,int *b){int t=*a;*a=*b;*b=t;}int main(void){int a,b;printf("输入两个整数：");if(scanf("%d%d",&a,&b)!=2)return 1;swap_int(&a,&b);printf("交换后：%d %d\n",a,b);return 0;}
