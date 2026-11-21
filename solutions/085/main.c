/*
 * 标准答案：CSV 成绩报告
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){char input[200],output[200];printf("输入CSV文件名 输出文件名：");if(scanf("%199s %199s",input,output)!=2)return 1;FILE *in=fopen(input,"r"),*out=fopen(output,"w");if(!in||!out){if(in)fclose(in);if(out)fclose(out);return 1;}char line[500];int row=0,bad=0;fprintf(out,"姓名,总分,平均分,等级\n");while(fgets(line,sizeof line,in)){row++;char *comma=strchr(line,',');if(!comma){fprintf(out,"第%d行格式错误\n",row);bad++;continue;}*comma='\0';char *end;double sum=0,count=0,p;char *pstr=comma+1;while(*pstr){p=strtod(pstr,&end);if(end==pstr)break;sum+=p;count++;pstr=end;if(*pstr==',')pstr++;}if(count==0){bad++;continue;}double avg=sum/count;char grade=avg>=90?'A':avg>=80?'B':avg>=70?'C':avg>=60?'D':'F';fprintf(out,"%s,%.2f,%.2f,%c\n",line,sum,avg,grade);}fclose(in);fclose(out);printf("已生成报告，无效行%d\n",bad);return 0;}
