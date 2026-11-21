/*
 * 标准答案：自选 C 语言毕业项目
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 毕业项目参考：终端记账本
 * 1. 保存收入/支出；2. 按分类汇总；3. 保存到 CSV；4. 重启后读取。
 */
typedef struct{char date[11],category[40];long cents;} Record;
int main(void){Record r[100];int n=0,op;FILE *f=fopen("ledger.csv","r");if(f){char line[200];while(n<100&&fgets(line,sizeof line,f)){char *a=strtok(line,",");char *b=a?strtok(NULL,","):NULL;char *c=b?strtok(NULL,"\r\n"):NULL;if(a&&b&&c){strncpy(r[n].date,a,sizeof r[n].date-1);r[n].date[sizeof r[n].date-1]='\0';strncpy(r[n].category,b,sizeof r[n].category-1);r[n].category[sizeof r[n].category-1]='\0';r[n].cents=strtol(c,NULL,10);n++;}}fclose(f);}while(1){puts("1添加 2汇总 3保存退出");if(scanf("%d",&op)!=1)return 1;if(op==1&&n<100){while(getchar()!='\n');printf("日期 分类 金额分：");if(scanf("%10s %39s %ld",r[n].date,r[n].category,&r[n].cents)==3)n++;}else if(op==2){long total=0;for(int i=0;i<n;i++)total+=r[i].cents;printf("记录数：%d，余额：%ld分\n",n,total);}else if(op==3){f=fopen("ledger.csv","w");if(!f)return 1;for(int i=0;i<n;i++)fprintf(f,"%s,%s,%ld\n",r[i].date,r[i].category,r[i].cents);fclose(f);puts("已保存 ledger.csv");break;}else puts("记录已满或无效操作");}return 0;}
