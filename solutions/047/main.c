/*
 * 标准答案：手写字符串拼接
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int append_text(char dst[],int capacity,const char src[]){int i=0;while(i<capacity&&dst[i]!='\0')i++;for(int j=0;src[j]!='\0';j++){if(i>=capacity-1){dst[i]='\0';return 0;}dst[i++]=src[j];}dst[i]='\0';return 1;}int main(void){char a[200],b[100];printf("输入第一段：");if(!fgets(a,sizeof a,stdin))return 1;printf("输入第二段：");if(!fgets(b,sizeof b,stdin))return 1;for(int i=0;a[i];i++)if(a[i]=='\n'||a[i]=='\r')a[i]='\0';for(int i=0;b[i];i++)if(b[i]=='\n'||b[i]=='\r')b[i]='\0';printf("拼接成功：%s\n",append_text(a,(int)sizeof a,b)?"是":"否");printf("结果：%s\n",a);return 0;}
