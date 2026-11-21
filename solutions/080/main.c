/*
 * 标准答案：内存安全清单工具
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){char **items=NULL;int n=0,cap=0,op;while(1){puts("1新增 2删除 3查看 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1){while(getchar()!='\n');char s[200];printf("文本：");if(!fgets(s,sizeof s,stdin))continue;s[strcspn(s,"\r\n")]='\0';char *copy=malloc(strlen(s)+1);if(!copy)return 1;strcpy(copy,s);if(n==cap){cap=cap?cap*2:4;char **tmp=realloc(items,(size_t)cap*sizeof *tmp);if(!tmp){free(copy);return 1;}items=tmp;}items[n++]=copy;}else if(op==2){int k;printf("序号：");scanf("%d",&k);if(k>=1&&k<=n){free(items[k-1]);for(int i=k-1;i<n-1;i++)items[i]=items[i+1];n--;}}else if(op==3)for(int i=0;i<n;i++)printf("%d %s\n",i+1,items[i]);}for(int i=0;i<n;i++)free(items[i]);free(items);return 0;}
