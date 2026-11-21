/*
 * 标准答案：括号匹配检查
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){char s[300],stack[300];printf("输入表达式：");if(!fgets(s,sizeof s,stdin))return 1;int top=0;for(int i=0;s[i];i++){char c=s[i];if(c=='('||c=='['||c=='{')stack[top++]=c;else if(c==')'||c==']'||c=='}'){char want=(c==')')?'(':((c==']')?'[':'{');if(top==0||stack[top-1]!=want){puts("括号不匹配");return 0;}top--;}}puts(top==0?"括号匹配":"括号不匹配");return 0;}
