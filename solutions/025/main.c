/*
 * 标准答案：水仙花数列表
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int cube(int n){return n*n*n;}int main(void){for(int n=100;n<1000;n++){int a=n/100,b=n/10%10,c=n%10;if(cube(a)+cube(b)+cube(c)==n)printf("%d ",n);}puts("");return 0;}
