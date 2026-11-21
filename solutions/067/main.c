/*
 * 标准答案：日志关键词过滤
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
int main(void){char input[200],output[200],key[100];printf("日志文件 结果文件 关键词：");if(scanf("%199s %199s %99s",input,output,key)!=3)return 1;FILE *in=fopen(input,"r"),*out=fopen(output,"w");if(!in||!out){if(in)fclose(in);if(out)fclose(out);puts("文件打开失败");return 1;}char line[1000];int matches=0;while(fgets(line,sizeof line,in)){if(strstr(line,key)){fputs(line,out);matches++;}}fclose(in);fclose(out);printf("匹配行数：%d\n",matches);return 0;}
