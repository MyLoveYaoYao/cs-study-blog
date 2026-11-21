/*
 * 标准答案：斐波那契序列
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int n;printf("输入项数：");if(scanf("%d",&n)!=1||n<1||n>90)return 1;unsigned long long a=0,b=1;for(int i=0;i<n;i++){printf("%llu%s",a,i+1<n?" ":"\n");unsigned long long next=a+b;a=b;b=next;}return 0;}
