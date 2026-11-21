/*
 * 标准答案：自然数求和
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { int n; printf("输入正整数："); if(scanf("%d",&n)!=1||n<1)return 1; long long sum=1LL*n*(n+1)/2; printf("循环求和可得：%lld（公式求和也为 %lld）\n",sum,sum); return 0; }
