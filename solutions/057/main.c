/*
 * 标准答案：库存记录本
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{int id,stock;char name[40];double price;} Item;int main(void){int n;printf("商品数量：");scanf("%d",&n);Item a[100];double total=0;for(int i=0;i<n;i++){scanf("%d %39s %lf %d",&a[i].id,a[i].name,&a[i].price,&a[i].stock);total+=a[i].price*a[i].stock;}int id;printf("查询编号：");scanf("%d",&id);for(int i=0;i<n;i++)if(a[i].id==id){printf("编号:%d 名称:%s 单价:%.2f 库存:%d\n",a[i].id,a[i].name,a[i].price,a[i].stock);printf("库存总价值：%.2f\n",total);return 0;}puts("未找到商品");return 0;}
