/*
 * 标准答案：二维矩阵加法
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int r,c,a[20][20],b[20][20];printf("行 列：");if(scanf("%d%d",&r,&c)!=2||r<1||c<1||r>20||c>20)return 1;puts("输入第一个矩阵：");for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);puts("输入第二个矩阵：");for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&b[i][j]);puts("相加结果：");for(int i=0;i<r;i++){for(int j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);puts("");}return 0;}
