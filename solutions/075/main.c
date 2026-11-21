/*
 * 标准答案：数组实现的栈
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#define CAP 20
int stack[CAP],top=0;int push(int v){if(top>=CAP)return 0;stack[top++]=v;return 1;}int pop(int *v){if(top==0)return 0;*v=stack[--top];return 1;}int peek(int *v){if(top==0)return 0;*v=stack[top-1];return 1;}int main(void){int op,v;while(1){puts("1压入 2弹出 3查看 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1){printf("值：");scanf("%d",&v);puts(push(v)?"压入成功":"栈已满");}else if(op==2)puts(pop(&v)?"弹出成功":"栈为空");else if(op==3)printf(peek(&v)?"栈顶：%d\n":"栈为空\n",v);}return 0;}
