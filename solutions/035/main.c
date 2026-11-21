/*
 * 标准答案：去重列表
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int n,a[100],b[100];printf("元素个数：");if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)scanf("%d",&a[i]);int size=0;for(int i=0;i<n;i++){int found=0;for(int j=0;j<size;j++)if(b[j]==a[i]){found=1;break;}if(!found)b[size++]=a[i];}printf("去重后：");for(int i=0;i<size;i++)printf("%d ",b[i]);printf("\n新长度：%d\n",size);return 0;}
