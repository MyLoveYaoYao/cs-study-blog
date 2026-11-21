/*
 * 标准答案：阶乘计算器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { int n; printf("输入0到20："); if(scanf("%d",&n)!=1||n<0||n>20)return 1; unsigned long long f=1; for(int i=2;i<=n;i++)f*=i; printf("%d! = %llu\n",n,f); return 0; }
