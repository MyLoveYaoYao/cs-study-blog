/*
 * 标准答案：数组统计器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int n,a[100];printf("输入元素个数：");if(scanf("%d",&n)!=1||n<1||n>100)return 1;printf("输入%d个整数：",n);for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;int min=a[0],max=a[0];long long sum=a[0];for(int i=1;i<n;i++){if(a[i]<min)min=a[i];if(a[i]>max)max=a[i];sum+=a[i];}printf("最大:%d 最小:%d 总和:%lld 平均:%.2f\n",max,min,sum,(double)sum/n);return 0;}
