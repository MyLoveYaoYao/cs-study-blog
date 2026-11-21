/*
 * 标准答案：范围内的素数
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdbool.h>
bool prime(int n){if(n<2)return false;for(int i=2;i<=n/i;i++)if(n%i==0)return false;return true;}int main(void){int a,b;printf("输入起点和终点：");if(scanf("%d%d",&a,&b)!=2||a>b)return 1;int count=0;for(int n=a;n<=b;n++)if(prime(n)){printf("%d ",n);count++;}printf("\n共%d个素数\n",count);return 0;}
