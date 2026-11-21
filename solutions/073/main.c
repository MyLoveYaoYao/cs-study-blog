/*
 * 标准答案：单向链表通讯录
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node{char name[40];struct Node *next;} Node;
int main(void){Node *head=NULL,*tail=NULL;int n;printf("新增联系人数量：");if(scanf("%d",&n)!=1||n<0)return 1;for(int i=0;i<n;i++){char name[40];printf("姓名：");scanf("%39s",name);Node *p=malloc(sizeof *p);if(!p)return 1;strcpy(p->name,name);p->next=NULL;if(!head)head=p;else tail->next=p;tail=p;}char key[40];printf("删除姓名：");scanf("%39s",key);Node **cur=&head;while(*cur&&strcmp((*cur)->name,key)!=0)cur=&(*cur)->next;if(*cur){Node *gone=*cur;*cur=gone->next;free(gone);}for(Node *p=head;p;p=p->next)printf("%s\n",p->name);while(head){Node *p=head;head=head->next;free(p);}return 0;}
