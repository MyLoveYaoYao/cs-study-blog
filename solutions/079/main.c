/*
 * 标准答案：简单词频统计
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
typedef struct{char word[50];int count;} Word;
int main(void){char text[1000];printf("输入英文文本：");if(!fgets(text,sizeof text,stdin))return 1;Word a[200];int n=0;char *p=text;while(*p){while(*p&&!isalpha((unsigned char)*p))p++;char word[50];int k=0;while(isalpha((unsigned char)*p)&&k<49)word[k++]=tolower((unsigned char)*p++);word[k]='\0';if(!k)continue;int f=-1;for(int i=0;i<n;i++)if(strcmp(a[i].word,word)==0){f=i;break;}if(f>=0)a[f].count++;else if(n<200){strcpy(a[n].word,word);a[n].count=1;n++;}}for(int i=1;i<n;i++){Word key=a[i];int j=i-1;while(j>=0&&a[j].count<key.count){a[j+1]=a[j];j--;}a[j+1]=key;}for(int i=0;i<n;i++)printf("%s %d\n",a[i].word,a[i].count);return 0;}
