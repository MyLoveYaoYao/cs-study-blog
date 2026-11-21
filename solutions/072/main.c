/*
 * 标准答案：动态学生名单
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct{char name[40];double score;} Student;
int main(void){int n;printf("人数：");if(scanf("%d",&n)!=1||n<1)return 1;Student *s=malloc((size_t)n*sizeof *s);if(!s)return 1;for(int i=0;i<n;i++){printf("姓名 分数：");scanf("%39s %lf",s[i].name,&s[i].score);}for(int i=1;i<n;i++){Student key=s[i];int j=i-1;while(j>=0&&s[j].score<key.score){s[j+1]=s[j];j--;}s[j+1]=key;}for(int i=0;i<n;i++)printf("%s %.2f\n",s[i].name,s[i].score);free(s);return 0;}
