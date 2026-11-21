/*
 * 标准答案：通讯录搜索
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
typedef struct{char name[40],phone[30],email[80];} Contact;int main(void){int n;printf("联系人数量：");if(scanf("%d",&n)!=1||n<0||n>50)return 1;Contact c[50];for(int i=0;i<n;i++){printf("姓名 电话 邮箱：");scanf("%39s %29s %79s",c[i].name,c[i].phone,c[i].email);}char name[40];printf("按姓名搜索：");scanf("%39s",name);for(int i=0;i<n;i++)if(strcmp(c[i].name,name)==0){printf("姓名:%s 电话:%s 邮箱:%s\n",c[i].name,c[i].phone,c[i].email);return 0;}puts("未找到");return 0;}
