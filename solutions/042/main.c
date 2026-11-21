/*
 * 标准答案：大小写转换器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[200];printf("输入文本：");if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i];i++)putchar((unsigned char)toupper((unsigned char)s[i]));return 0;}
