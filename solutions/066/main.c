/*
 * 标准答案：文件复制工具
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){char src[200],dst[200];printf("源文件：");scanf("%199s",src);printf("目标文件：");scanf("%199s",dst);FILE *in=fopen(src,"rb");if(!in){puts("无法打开源文件");return 1;}FILE *out=fopen(dst,"wb");if(!out){fclose(in);puts("无法创建目标文件");return 1;}unsigned char buf[4096];size_t n;while((n=fread(buf,1,sizeof buf,in))>0)if(fwrite(buf,1,n,out)!=n){puts("写入失败");fclose(in);fclose(out);return 1;}if(ferror(in))puts("读取失败");else puts("复制完成");fclose(in);fclose(out);return ferror(in);}
