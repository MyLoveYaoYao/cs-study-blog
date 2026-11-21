/*
 * 标准答案：支出分类汇总
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
typedef struct{char category[40];long cents;} Expense;int main(void){int n;printf("支出记录数：");if(scanf("%d",&n)!=1||n<0)return 1;Expense e[100];int types=0;for(int i=0;i<n;i++){char cat[40];long cents;printf("类别 支出（分）：");scanf("%39s %ld",cat,&cents);int found=-1;for(int j=0;j<types;j++)if(strcmp(e[j].category,cat)==0)found=j;if(found>=0)e[found].cents+=cents;else{strcpy(e[types].category,cat);e[types].cents=cents;types++;}}int max=0;for(int i=1;i<types;i++)if(e[i].cents>e[max].cents)max=i;for(int i=0;i<types;i++)printf("%s %ld分\n",e[i].category,e[i].cents);if(types)printf("最高类别：%s %ld分\n",e[max].category,e[max].cents);return 0;}
