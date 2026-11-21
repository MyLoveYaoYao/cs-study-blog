/*
 * 标准答案：配置文件读取器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char file[200],key[100];printf("配置文件名和要查询的key：");if(scanf("%199s %99s",file,key)!=2)return 1;FILE *f=fopen(file,"r");if(!f){puts("无法打开配置文件");return 1;}char line[300];while(fgets(line,sizeof line,f)){char *eq=strchr(line,'=');if(!eq||line[0]=='#'||line[0]=='\n')continue;*eq='\0';char *k=line,*v=eq+1;while(isspace((unsigned char)*k))k++;char *ke=k+strlen(k);while(ke>k&&isspace((unsigned char)ke[-1]))*--ke='\0';while(isspace((unsigned char)*v))v++;char *ve=v+strlen(v);while(ve>v&&isspace((unsigned char)ve[-1]))*--ve='\0';if(strcmp(k,key)==0){printf("%s=%s\n",key,v);fclose(f);return 0;}}fclose(f);puts("未找到该配置项");return 0;}
