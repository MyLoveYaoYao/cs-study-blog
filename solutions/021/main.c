/*
 * 标准答案：最大公约数与最小公倍数
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
long long gcd_ll(long long a,long long b){while(b){long long r=a%b;a=b;b=r;}return a;}int main(void){long long a,b;printf("输入两个正整数：");if(scanf("%lld %lld",&a,&b)!=2||a<=0||b<=0)return 1;long long g=gcd_ll(a,b);printf("最大公约数：%lld\n最小公倍数：%lld\n",g,a/g*b);return 0;}
