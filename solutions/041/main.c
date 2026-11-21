/*
 * 标准答案：手写字符串长度
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){char s[200];printf("输入一行文本：");if(!fgets(s,sizeof s,stdin))return 1;int len=0;while(s[len]!='\0'){if(s[len]=='\n'||s[len]=='\r')break;len++;}printf("字符数：%d\n",len);return 0;}
