/*
 * 标准答案：成绩文件导入
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){char file[200],line[300];printf("成绩文件名：");if(scanf("%199s",file)!=1)return 1;FILE *f=fopen(file,"r");if(!f){puts("无法打开文件");return 1;}double sum=0;int count=0,line_no=0,bad=0;while(fgets(line,sizeof line,f)){line_no++;char *comma=strchr(line,',');if(!comma){printf("第%d行格式错误\n",line_no);bad++;continue;}char *end;double score=strtod(comma+1,&end);if(end==comma+1||(*end!='\n'&&*end!='\r'&&*end!='\0')){printf("第%d行分数无效\n",line_no);bad++;continue;}sum+=score;count++;}fclose(f);printf("有效记录%d 无效行%d 平均分%.2f\n",count,bad,count?sum/count:0.0);return 0;}
