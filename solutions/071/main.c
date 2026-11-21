/*
 * 标准答案：动态数组扩容器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){int capacity=4,size=0,*a=malloc((size_t)capacity*sizeof *a);if(!a)return 1;while(1){int n;printf("输入整数（-1结束）：");if(scanf("%d",&n)!=1||n==-1)break;if(size==capacity){capacity*=2;int *tmp=realloc(a,(size_t)capacity*sizeof *a);if(!tmp){puts("扩容失败");free(a);return 1;}a=tmp;}a[size++]=n;}for(int i=0;i<size;i++)printf("%d ",a[i]);puts("");free(a);return 0;}
