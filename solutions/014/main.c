/*
 * 标准答案：闰年判断器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { int y; printf("输入年份："); if(scanf("%d",&y)!=1||y<1)return 1; int leap=(y%400==0)||(y%4==0&&y%100!=0); printf("%d年是%s年\n",y,leap?"闰":"平"); return 0; }
