/*
 * 标准答案：字符串反转
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
int main(void){char s[200];printf("输入文本：");if(!fgets(s,sizeof s,stdin))return 1;s[strcspn(s,"\r\n")]='\0';int left=0,right=(int)strlen(s)-1;while(left<right){char t=s[left];s[left]=s[right];s[right]=t;left++;right--;}printf("反转：%s\n",s);return 0;}
