/*
 * 标准答案：素数检测器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n){if(n<2)return false;if(n%2==0)return n==2;for(int i=3;i<=n/i;i+=2)if(n%i==0)return false;return true;}int main(void){int n;printf("输入整数：");if(scanf("%d",&n)!=1)return 1;printf("%d %s素数\n",n,is_prime(n)?"是":"不是");return 0;}
