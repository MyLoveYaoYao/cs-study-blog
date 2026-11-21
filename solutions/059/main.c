/*
 * 标准答案：日期与下一天
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{int y,m,d;} Date;int leap(int y){return y%400==0||(y%4==0&&y%100!=0);}int days(int y,int m){static const int d[]={0,31,28,31,30,31,30,31,31,30,31,30,31};return m==2&&leap(y)?29:d[m];}int main(void){Date x;printf("输入年月日：");if(scanf("%d%d%d",&x.y,&x.m,&x.d)!=3||x.m<1||x.m>12||x.d<1||x.d>days(x.y,x.m)){puts("日期无效");return 1;}x.d++;if(x.d>days(x.y,x.m)){x.d=1;x.m++;if(x.m>12){x.m=1;x.y++;}}printf("下一天：%04d-%02d-%02d\n",x.y,x.m,x.d);return 0;}
