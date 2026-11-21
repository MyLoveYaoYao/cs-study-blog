/*
 * 标准答案：终端版扫雷
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){const int n=5;int mine[5][5]={0},open[5][5]={0};srand((unsigned)time(NULL));int placed=0;while(placed<5){int r=rand()%n,c=rand()%n;if(!mine[r][c]){mine[r][c]=1;placed++;}}int r,c;printf("输入行列（0-4）：");if(scanf("%d%d",&r,&c)!=2||r<0||r>=n||c<0||c>=n)return 1;if(mine[r][c]){puts("踩到地雷，游戏失败");return 0;}open[r][c]=1;int count=0;for(int dr=-1;dr<=1;dr++)for(int dc=-1;dc<=1;dc++){int rr=r+dr,cc=c+dc;if(rr>=0&&rr<n&&cc>=0&&cc<n&&mine[rr][cc])count++;}printf("周围地雷：%d\n",count);for(int i=0;i<n;i++){for(int j=0;j<n;j++)printf(open[i][j]?"■ ":"□ ");puts("");}return 0;}
