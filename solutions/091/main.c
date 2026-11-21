/*
 * 标准答案：命令行图书馆
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
typedef struct{char id[20],title[100],author[50];int borrowed;} Book;
int main(void){int n=0,op;Book b[100];while(1){puts("1新增 2查询 3借出 4归还 0退出");if(scanf("%d",&op)!=1)return 1;if(op==0)break;if(op==1&&n<100){printf("编号 标题 作者：");scanf("%19s %99s %49s",b[n].id,b[n].title,b[n].author);b[n].borrowed=0;n++;}else if(op==2||op==3||op==4){char id[20];printf("图书编号：");scanf("%19s",id);int found=-1;for(int i=0;i<n;i++)if(strcmp(b[i].id,id)==0){found=i;break;}if(found<0)puts("未找到图书");else if(op==2)printf("编号:%s 标题:%s 作者:%s 状态:%s\n",b[found].id,b[found].title,b[found].author,b[found].borrowed?"借出":"在馆");else{b[found].borrowed=(op==3);puts(op==3?"借出成功":"归还成功");}}else puts("图书数量已满或无效操作");}return 0;}
