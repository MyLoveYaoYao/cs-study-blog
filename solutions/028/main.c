/*
 * 标准答案：整数反转
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <limits.h>
int main(void){long long n;printf("输入整数：");if(scanf("%lld",&n)!=1)return 1;int sign=n<0?-1:1;n*=sign;long long reversed=0;while(n){int d=n%10;n/=10;if(reversed>(LLONG_MAX-d)/10){puts("反转后超出范围");return 1;}reversed=reversed*10+d;}printf("反转：%lld\n",reversed*sign);return 0;}
