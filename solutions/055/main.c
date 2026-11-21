/*
 * 标准答案：学生成绩统计
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{char name[40];double score;} Student;int main(void){int n;printf("学生人数：");if(scanf("%d",&n)!=1||n<1||n>50)return 1;Student s[50];double sum=0,max=-1e9;int fail=0;for(int i=0;i<n;i++){scanf("%39s %lf",s[i].name,&s[i].score);sum+=s[i].score;if(s[i].score>max)max=s[i].score;if(s[i].score<60)fail++;}printf("平均分:%.2f 最高分:%.2f 不及格人数:%d\n",sum/n,max,fail);return 0;}
