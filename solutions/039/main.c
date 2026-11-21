/*
 * 标准答案：井字棋棋盘检查
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){char b[3][3];puts("逐行输入井字棋棋盘（X/O/.）：");for(int i=0;i<3;i++)for(int j=0;j<3;j++)scanf(" %c",&b[i][j]);char winner='.';for(int i=0;i<3;i++)if(b[i][0]!='.'&&b[i][0]==b[i][1]&&b[i][1]==b[i][2])winner=b[i][0];for(int j=0;j<3;j++)if(b[0][j]!='.'&&b[0][j]==b[1][j]&&b[1][j]==b[2][j])winner=b[0][j];if(b[0][0]!='.'&&b[0][0]==b[1][1]&&b[1][1]==b[2][2])winner=b[0][0];if(b[0][2]!='.'&&b[0][2]==b[1][1]&&b[1][1]==b[2][0])winner=b[0][2];if(winner!='.')printf("胜者：%c\n",winner);else{int empty=0;for(int i=0;i<3;i++)for(int j=0;j<3;j++)if(b[i][j]=='.')empty=1;puts(empty?"继续游戏":"平局");}return 0;}
