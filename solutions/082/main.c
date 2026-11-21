/*
 * 标准答案：带测试的数学工具箱
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdbool.h>
long long gcd(long long a,long long b){while(b){long long r=a%b;a=b;b=r;}return a;}bool prime(int n){if(n<2)return false;for(int i=2;i<=n/i;i++)if(n%i==0)return false;return true;}unsigned long long factorial(int n){unsigned long long f=1;for(int i=2;i<=n;i++)f*=i;return f;}int main(void){int failures=0;if(gcd(48,18)!=6){puts("gcd 测试失败");failures++;}if(!prime(97)||prime(1)||prime(100)){puts("素数测试失败");failures++;}if(factorial(0)!=1||factorial(5)!=120){puts("阶乘测试失败");failures++;}printf("测试完成，失败数：%d\n",failures);return failures!=0;}
