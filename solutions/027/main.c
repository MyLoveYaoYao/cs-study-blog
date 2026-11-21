/*
 * 标准答案：数字各位求和
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <limits.h>
int main(void){long long n;printf("输入整数：");if(scanf("%lld",&n)!=1)return 1;if(n<0)n=-n;int sum=0;do{sum+=n%10;n/=10;}while(n);printf("数字和：%d\n",sum);return 0;}
