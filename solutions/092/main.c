/*
 * 标准答案：学习计划与记录器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
typedef struct{char date[11],goal[100];int minutes,done;} Study;
int main(void){Study a[100];int n=0,op;while(1){puts("1新增目标记录 2查看汇总 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1&&n<100){printf("日期 YYYY-MM-DD 学习分钟 完成0/1：");scanf("%10s %d %d",a[n].date,&a[n].minutes,&a[n].done);while(getchar()!='\n');printf("目标：");if(!fgets(a[n].goal,sizeof a[n].goal,stdin))continue;a[n].goal[strcspn(a[n].goal,"\r\n")]='\0';n++;}else if(op==2){char date[11];printf("日期：");scanf("%10s",date);int total=0,done=0;for(int i=0;i<n;i++)if(strcmp(a[i].date,date)==0){total+=a[i].minutes;done+=a[i].done;}printf("%s 学习%d分钟 完成目标%d项\n",date,total,done);}else puts("记录已满或无效操作");}return 0;}
