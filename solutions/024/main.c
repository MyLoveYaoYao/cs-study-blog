/*
 * 标准答案：完数查找
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int limit;printf("输入上限：");if(scanf("%d",&limit)!=1||limit<6)return 1;for(int n=2;n<=limit;n++){int sum=1;for(int i=2;i<=n/2;i++)if(n%i==0)sum+=i;if(sum==n)printf("%d ",n);}puts("");return 0;}
