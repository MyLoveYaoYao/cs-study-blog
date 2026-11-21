/*
 * 标准答案：课程成绩管理系统
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{char id[20],name[40];double math,english,programming;} Student;
int main(void){int n;printf("学生人数：");if(scanf("%d",&n)!=1||n<1||n>100)return 1;Student s[100];for(int i=0;i<n;i++){printf("学号 姓名 数学 英语 编程：");scanf("%19s %39s %lf %lf %lf",s[i].id,s[i].name,&s[i].math,&s[i].english,&s[i].programming);}for(int i=1;i<n;i++){Student key=s[i];int j=i-1;double ks=key.math+key.english+key.programming;while(j>=0){double js=s[j].math+s[j].english+s[j].programming;if(js>=ks)break;s[j+1]=s[j];j--; }s[j+1]=key;}for(int i=0;i<n;i++){double total=s[i].math+s[i].english+s[i].programming;printf("%s %s 总分%.2f 平均%.2f\n",s[i].id,s[i].name,total,total/3.0);}return 0;}
