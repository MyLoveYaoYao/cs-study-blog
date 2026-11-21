/*
 * 标准答案：数组倒序打印
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int n,a[100];printf("输入元素个数：");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);puts("正向：");for(int i=0;i<n;i++)printf("%d ",a[i]);puts("\n反向：");for(int i=n-1;i>=0;i--)printf("%d ",a[i]);puts("");return 0;}
