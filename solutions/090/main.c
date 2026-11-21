/*
 * 标准答案：多文件迷你游戏合集
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guess_game(void){int target,x;target=rand()%20+1;for(;;){printf("猜一个1到20的数：");if(scanf("%d",&x)!=1)return;if(x==target){puts("猜对了");return;}puts(x<target?"小了":"大了");}}void rps_game(void){const char *names[]={"石头","剪刀","布"};int x,y;printf("0石头 1剪刀 2布：");if(scanf("%d",&x)!=1||x<0||x>2)return;y=rand()%3;printf("电脑出%s，结果：%s\n",names[y],x==y?"平局":(x-y+3)%3==1?"你赢":"你输");}int main(void){srand((unsigned)time(NULL));int op;for(;;){puts("1猜数字 2剪刀石头布 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1)guess_game();else if(op==2)rps_game();else puts("无效选项");}return 0;}
