/*
 * 标准答案：三个数找最大
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { int a,b,c; printf("输入三个整数："); if(scanf("%d%d%d",&a,&b,&c)!=3)return 1; int max=a; if(b>max)max=b; if(c>max)max=c; printf("最大值：%d\n",max); return 0; }
