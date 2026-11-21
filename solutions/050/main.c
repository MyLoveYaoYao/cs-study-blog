/*
 * 标准答案：凯撒密码
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
int main(void){char s[300];int shift;printf("输入文本：");if(!fgets(s,sizeof s,stdin))return 1;printf("位移量：");if(scanf("%d",&shift)!=1)return 1;s[strcspn(s,"\r\n")]='\0';for(int i=0;s[i];i++){char c=s[i];if(c>='a'&&c<='z')s[i]='a'+(c-'a'+shift+2600)%26;else if(c>='A'&&c<='Z')s[i]='A'+(c-'A'+shift+2600)%26;}printf("加密结果：%s\n",s);return 0;}
