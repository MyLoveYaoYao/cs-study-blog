/*
 * 标准答案：元音字母统计
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[300];int count[5]={0};printf("输入文本：");if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i];i++){char c=(char)tolower((unsigned char)s[i]);if(c=='a')count[0]++;else if(c=='e')count[1]++;else if(c=='i')count[2]++;else if(c=='o')count[3]++;else if(c=='u')count[4]++;}printf("a:%d e:%d i:%d o:%d u:%d\n",count[0],count[1],count[2],count[3],count[4]);return 0;}
