/*
 * 标准答案：枚举状态机
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef enum{RED,GREEN,YELLOW} Light;const char *name(Light x){return x==RED?"红灯":x==GREEN?"绿灯":"黄灯";}Light next_state(Light x){switch(x){case RED:return GREEN;case GREEN:return YELLOW;case YELLOW:return RED;}return RED;}int main(void){Light x=RED;for(int i=0;i<6;i++){printf("%d：%s\n",i+1,name(x));x=next_state(x);}return 0;}
