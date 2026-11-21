/*
 * 标准答案：手写字符串复制
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
void copy_text(char dst[],const char src[],int capacity){int i=0;if(capacity<=0)return;for(;i<capacity-1&&src[i]!='\0';i++)dst[i]=src[i];dst[i]='\0';}int main(void){char src[100],dst[100];printf("输入源字符串：");if(!fgets(src,sizeof src,stdin))return 1;for(int i=0;src[i];i++)if(src[i]=='\n'||src[i]=='\r'){src[i]='\0';break;}copy_text(dst,src,(int)sizeof dst);printf("复制结果：%s\n",dst);return 0;}
