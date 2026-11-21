/*
 * 标准答案：冒泡排序可视化
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int n,a[100];printf("元素个数：");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n-1;i++){for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1];a[j+1]=t;}printf("第%d轮：",i+1);for(int k=0;k<n;k++)printf("%d ",a[k]);puts("");}return 0;}
