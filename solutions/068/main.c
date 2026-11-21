/*
 * 标准答案：库存数据保存
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{int id,stock;char name[40];double price;} Item;
int main(void){Item a[100];int n=0;FILE *f=fopen("inventory.txt","r");if(f){while(n<100&&fscanf(f,"%d %39s %lf %d",&a[n].id,a[n].name,&a[n].price,&a[n].stock)==4)n++;fclose(f);}int id,stock;printf("商品编号 新库存：");if(scanf("%d%d",&id,&stock)!=2)return 1;int found=-1;for(int i=0;i<n;i++)if(a[i].id==id)found=i;if(found>=0)a[found].stock=stock;else printf("未找到编号%d\n",id);f=fopen("inventory.txt","w");if(!f)return 1;for(int i=0;i<n;i++)fprintf(f,"%d %s %.2f %d\n",a[i].id,a[i].name,a[i].price,a[i].stock);fclose(f);return 0;}
