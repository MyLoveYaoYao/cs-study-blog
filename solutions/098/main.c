/*
 * 标准答案：简易数据库表格
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{char name[40],value[100];} Row;
int main(void){Row r[100];int n=0,op;while(1){puts("1新增记录 2查看记录 3按姓名查找 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1&&n<100){printf("姓名 值：");scanf("%39s %99s",r[n].name,r[n].value);n++;}else if(op==2){for(int i=0;i<n;i++)printf("%d %s,%s\n",i+1,r[i].name,r[i].value);}else if(op==3){char key[40];printf("姓名：");scanf("%39s",key);int found=0;for(int i=0;i<n;i++)if(strcmp(r[i].name,key)==0){printf("%s,%s\n",r[i].name,r[i].value);found=1;}if(!found)puts("未找到");}else puts("无效操作或记录已满");}return 0;}
