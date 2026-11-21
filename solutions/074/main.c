/*
 * 标准答案：链表反转
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{int value;struct Node *next;} Node;
int main(void){int n;printf("节点数：");scanf("%d",&n);Node *head=NULL,*tail=NULL;for(int i=0;i<n;i++){int v;scanf("%d",&v);Node *p=malloc(sizeof *p);if(!p)return 1;p->value=v;p->next=NULL;if(!head)head=p;else tail->next=p;tail=p;}for(Node *p=head;p;p=p->next)printf("%d ",p->value);puts("");Node *prev=NULL,*cur=head,*next=NULL;while(cur){next=cur->next;cur->next=prev;prev=cur;cur=next;}head=prev;for(Node *p=head;p;p=p->next)printf("%d ",p->value);puts("");while(head){Node *p=head;head=head->next;free(p);}return 0;}
