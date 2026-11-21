/*
 * 标准答案：通讯录持久化
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{char name[40],phone[30];} Contact;
int main(void){Contact c[100];int n=0;FILE *f=fopen("contacts.txt","r");if(f){while(n<100&&fscanf(f,"%39s %29s",c[n].name,c[n].phone)==2)n++;fclose(f);}char name[40],phone[30];printf("输入姓名 电话（输入空行结束）：");while(fgets(name,sizeof name,stdin)){name[strcspn(name,"\r\n")]='\0';if(!name[0])break;printf("电话：");if(!fgets(phone,sizeof phone,stdin))break;phone[strcspn(phone,"\r\n")]='\0';if(n<100){strcpy(c[n].name,name);strcpy(c[n].phone,phone);n++;}puts("继续姓名：");}f=fopen("contacts.txt","w");if(!f)return 1;for(int i=0;i<n;i++)fprintf(f,"%s %s\n",c[i].name,c[i].phone);fclose(f);printf("已保存%d位联系人\n",n);return 0;}
