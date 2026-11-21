/*
 * 标准答案：链表版待办队列
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node{char text[100];struct Node *next;} Node;int main(void){Node *head=NULL,*tail=NULL;char text[100];puts("输入任务（空行结束）：");while(getchar()!='\n'){}while(fgets(text,sizeof text,stdin)){text[strcspn(text,"\r\n")]='\0';if(!text[0])break;Node *p=malloc(sizeof *p);if(!p)return 1;strcpy(p->text,text);p->next=NULL;if(!tail)head=tail=p;else{tail->next=p;tail=p;}}Node *done=head;if(done){head=head->next;if(!head)tail=NULL;printf("完成最早任务：%s\n",done->text);free(done);}for(Node *p=head;p;p=p->next)puts(p->text);while(head){Node *p=head;head=head->next;free(p);}return 0;}
