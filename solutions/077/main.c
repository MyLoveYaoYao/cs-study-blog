/*
 * 标准答案：循环队列
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#define CAP 5
int q[CAP],front=0,rear=0,count=0;int enqueue(int v){if(count==CAP)return 0;q[rear]=v;rear=(rear+1)%CAP;count++;return 1;}int dequeue(int *v){if(count==0)return 0;*v=q[front];front=(front+1)%CAP;count--;return 1;}int main(void){enqueue(10);enqueue(20);enqueue(30);int v;while(dequeue(&v))printf("%d ",v);puts("");return 0;}
