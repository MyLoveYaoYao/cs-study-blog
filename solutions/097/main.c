/*
 * 标准答案：迷你文本编辑器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){char **lines=NULL;int n=0,cap=0,op;while(1){puts("1插入行 2删除行 3查看 4查找 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1){while(getchar()!='\n');char text[300];printf("文本：");if(!fgets(text,sizeof text,stdin))continue;text[strcspn(text,"\r\n")]='\0';int pos=n;printf("行号1到%d：",n+1);scanf("%d",&pos);if(pos<1||pos>n+1)continue;char *copy=malloc(strlen(text)+1);if(!copy)return 1;strcpy(copy,text);char **tmp=realloc(lines,(n+1)*sizeof *tmp);if(!tmp){free(copy);return 1;}lines=tmp;for(int i=n;i>=pos;i--)lines[i]=lines[i-1];lines[pos-1]=copy;n++;}else if(op==2){int pos;printf("行号：");scanf("%d",&pos);if(pos<1||pos>n)continue;free(lines[pos-1]);for(int i=pos-1;i<n-1;i++)lines[i]=lines[i+1];n--;}else if(op==3)for(int i=0;i<n;i++)printf("%d %s\n",i+1,lines[i]);else if(op==4){char key[100];while(getchar()!='\n');printf("关键词：");if(!fgets(key,sizeof key,stdin))continue;key[strcspn(key,"\r\n")]='\0';for(int i=0;i<n;i++)if(strstr(lines[i],key))printf("%d %s\n",i+1,lines[i]);}}for(int i=0;i<n;i++)free(lines[i]);free(lines);return 0;}
