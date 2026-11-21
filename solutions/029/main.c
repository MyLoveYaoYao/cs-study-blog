/*
 * 标准答案：回文数字判断
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){long long n;printf("输入整数：");if(scanf("%lld",&n)!=1||n<0)return 1;long long original=n,reversed=0;while(n){reversed=reversed*10+n%10;n/=10;}printf("%lld %s回文数\n",original,reversed==original?"是":"不是");return 0;}
