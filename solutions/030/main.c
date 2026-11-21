/*
 * 标准答案：十进制转二进制
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){unsigned n;printf("输入整数：");if(scanf("%u",&n)!=1||n>65535)return 1;if(n==0){puts("0 = 0");return 0;}int bits[16],count=0;while(n){bits[count++]=n%2;n/=2;}printf("二进制：");for(int i=count-1;i>=0;i--)printf("%d",bits[i]);puts("");return 0;}
