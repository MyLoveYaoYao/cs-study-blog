/*
 * 标准答案：简易通讯录应用
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{char name[40],phone[30];} Contact;
int main(void){int n=0,op;Contact *c=NULL;while(1){puts("1新增 2搜索 3删除 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1){Contact *tmp=realloc(c,(n+1)*sizeof *tmp);if(!tmp)return 1;c=tmp;printf("姓名 电话：");scanf("%39s %29s",c[n].name,c[n].phone);n++;}else if(op==2){char key[40];printf("姓名：");scanf("%39s",key);int found=0;for(int i=0;i<n;i++)if(strcmp(c[i].name,key)==0){printf("%s %s\n",c[i].name,c[i].phone);found=1;}if(!found)puts("未找到");}else if(op==3){char key[40];printf("姓名：");scanf("%39s",key);for(int i=0;i<n;i++)if(strcmp(c[i].name,key)==0){for(int j=i;j<n-1;j++)c[j]=c[j+1];n--;break;}}}free(c);return 0;}
