/*
 * 标准答案：日志分析器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
int main(int argc,char **argv){if(argc!=3){printf("用法：%s 日志文件 关键词\n",argv[0]);return 1;}FILE *f=fopen(argv[1],"r");if(!f){puts("无法打开日志文件");return 1;}char line[1000];int number=0,count=0,first=0,last=0;while(fgets(line,sizeof line,f)){number++;if(strstr(line,argv[2])){if(!first)first=number;last=number;count++;}}fclose(f);printf("匹配行数：%d",count);if(count)printf("，最早：%d，最晚：%d",first,last);puts("");return 0;}
