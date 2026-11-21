/*
 * 标准答案：学生信息卡
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{int id;char name[40];double score;} Student;int main(void){int n;printf("学生人数：");if(scanf("%d",&n)!=1||n<1||n>50)return 1;Student s[50];for(int i=0;i<n;i++){printf("学号 姓名 分数：");scanf("%d %39s %lf",&s[i].id,s[i].name,&s[i].score);}int id;printf("查找学号：");scanf("%d",&id);for(int i=0;i<n;i++)if(s[i].id==id){printf("学号:%d 姓名:%s 分数:%.2f\n",s[i].id,s[i].name,s[i].score);return 0;}puts("未找到该学生");return 0;}
