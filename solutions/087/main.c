/*
 * 标准答案：文本差异小工具
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
int main(void){char f1[200],f2[200];printf("两个文件名：");if(scanf("%199s %199s",f1,f2)!=2)return 1;FILE *a=fopen(f1,"r"),*b=fopen(f2,"r");if(!a||!b){if(a)fclose(a);if(b)fclose(b);return 1;}char la[1000],lb[1000];int line=1,diff=0;while(1){char *pa=fgets(la,sizeof la,a),*pb=fgets(lb,sizeof lb,b);if(!pa&&!pb)break;if(!pa||!pb||strcmp(la,lb)!=0){printf("第%d行不同\nA:%sB:%s",line,pa?la:"<文件结束>\n",pb?lb:"<文件结束>\n");diff++;}line++;}fclose(a);fclose(b);printf("差异行数：%d\n",diff);return 0;}
