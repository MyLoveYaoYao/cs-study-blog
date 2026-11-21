/*
 * 标准答案：文本文件统计
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <ctype.h>
int main(void){char name[200];printf("文件名：");if(scanf("%199s",name)!=1)return 1;FILE *f=fopen(name,"r");if(!f){puts("无法打开文件");return 1;}long chars=0,lines=0,words=0;int c,last=' ',in_word=0;while((c=fgetc(f))!=EOF){chars++;if(c=='\n')lines++;if(isalnum((unsigned char)c)){if(!in_word){words++;in_word=1;}}else in_word=0;last=c;}if(chars>0&&last!='\n')lines++;fclose(f);printf("字符%ld 行%ld 单词%ld\n",chars,lines,words);return 0;}
