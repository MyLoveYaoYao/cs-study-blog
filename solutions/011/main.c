/*
 * 标准答案：正负零判断器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { int n; printf("输入整数："); if(scanf("%d", &n)!=1) return 1; if(n>0) puts("正数"); else if(n<0) puts("负数"); else puts("零"); return 0; }
