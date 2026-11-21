/*
 * 标准答案：学习笔记保存器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){FILE *f=fopen("notes.txt","a");if(!f){puts("无法打开笔记文件");return 1;}char line[300];puts("输入一行笔记：");if(!fgets(line,sizeof line,stdin)){fclose(f);return 1;}if(fputs(line,f)==EOF||fclose(f)==EOF){puts("保存笔记失败");return 1;}puts("笔记已追加到 notes.txt");return 0;}
