/*
 * 标准答案：命令行番茄钟
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int focus,rest,cyles;printf("专注分钟 休息分钟 循环次数：");if(scanf("%d%d%d",&focus,&rest,&cyles)!=3||focus<1||rest<1||cyles<1)return 1;for(int i=1;i<=cyles;i++){printf("第%d轮：专注%02d:00-%02d:00，休息%02d:00\n",i,0,focus,rest);}puts("番茄钟计划生成完成");return 0;}
