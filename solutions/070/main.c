/*
 * 标准答案：命令行文件信息
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(int argc,char *argv[]){if(argc!=2){printf("用法：%s 文件名\n",argc>0?argv[0]:"程序");return 1;}FILE *f=fopen(argv[1],"rb");if(!f){puts("无法打开文件");return 1;}long bytes=0,lines=0;int c,last=-1;while((c=fgetc(f))!=EOF){bytes++;if(c=='\n')lines++;last=c;}if(bytes>0&&last!='\n')lines++;fclose(f);printf("字节数：%ld\n行数：%ld\n",bytes,lines);return 0;}
