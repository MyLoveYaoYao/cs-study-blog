/*
 * 标准答案：猜数字游戏
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) { srand((unsigned)time(NULL)); int target=rand()%100+1,guess,count=0; do{printf("猜1到100：");if(scanf("%d",&guess)!=1)return 1;count++;if(guess>target)puts("大了");else if(guess<target)puts("小了");}while(guess!=target);printf("猜对了，共%d次\n",count);return 0; }
