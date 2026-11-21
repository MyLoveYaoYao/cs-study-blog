/*
 * 标准答案：合并两个有序数组
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int n,m,a[100],b[100],c[200];printf("第一个数组长度：");scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("第二个数组长度：");scanf("%d",&m);for(int i=0;i<m;i++)scanf("%d",&b[i]);int i=0,j=0,k=0;while(i<n&&j<m)c[k++]=(a[i]<=b[j]?a[i++]:b[j++]);while(i<n)c[k++]=a[i++];while(j<m)c[k++]=b[j++];for(i=0;i<k;i++)printf("%d ",c[i]);puts("");return 0;}
