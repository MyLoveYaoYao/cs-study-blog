/*
 * 标准答案：乘法口诀表
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { for(int i=1;i<=9;i++){for(int j=1;j<=i;j++)printf("%d×%d=%2d  ",j,i,i*j);puts("");} return 0; }
