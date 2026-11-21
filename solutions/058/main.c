/*
 * 标准答案：银行账户模拟
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{char name[40];double balance;} Account;int main(void){Account account={"学习账户",100.0};int op;double amount;for(;;){printf("1存款 2取款 3余额 0退出：");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==3){printf("%s余额：%.2f\n",account.name,account.balance);continue;}printf("金额：");if(scanf("%lf",&amount)!=1||amount<0){puts("金额无效");continue;}if(op==1)account.balance+=amount;else if(op==2&&amount<=account.balance)account.balance-=amount;else if(op==2)puts("余额不足");else puts("无效操作");}return 0;}
