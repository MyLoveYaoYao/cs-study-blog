/*
 * 标准答案：指针遍历数组
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int pointer_sum(const int *p,int n){int sum=0;for(int i=0;i<n;i++)sum+=*(p+i);return sum;}int main(void){int n,a[100];printf("元素个数：");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("总和：%d\n",pointer_sum(a,n));return 0;}
