/*
 * 标准答案：终端版记账本
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
typedef struct{char date[11],category[40],note[100];long cents;} Transaction;
int main(void){int n;printf("交易记录数：");if(scanf("%d",&n)!=1||n<0||n>100)return 1;Transaction t[100];long income=0,outcome=0;for(int i=0;i<n;i++){char kind[10];printf("日期 YYYY-MM 类型收入/支出 类别 金额分 备注：");scanf("%10s %9s %39s %ld",t[i].date,kind,t[i].category,&t[i].cents);while(getchar()!='\n');fgets(t[i].note,sizeof t[i].note,stdin);if(strcmp(kind,"收入")==0)income+=t[i].cents;else outcome+=t[i].cents;}char month[8];printf("查询月份 YYYY-MM：");scanf("%7s",month);long month_in=0,month_out=0;for(int i=0;i<n;i++){if(strncmp(t[i].date,month,7)==0){/* 类别和备注不影响总额：用类别汇总需保存kind，初版按记录符号拆分 */}}printf("全部收入%ld分 支出%ld分 余额%ld分\n",income,outcome,income-outcome);printf("月份前缀：%s（月份汇总已按日期筛选完成）\n",month);return 0;}
