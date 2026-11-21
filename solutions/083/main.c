/*
 * 标准答案：参数化计算器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){if(argc!=4){printf("用法：%s 数字 运算符 数字\n",argv[0]);puts("运算符：+ - * /");return 1;}char *end1,*end2;double a=strtod(argv[1],&end1),b=strtod(argv[3],&end2);if(*end1||*end2){puts("数字格式错误");return 1;}switch(argv[2][0]){case '+':printf("%.6g\n",a+b);break;case '-':printf("%.6g\n",a-b);break;case '*':printf("%.6g\n",a*b);break;case '/':if(b==0){puts("除数不能为0");return 1;}printf("%.6g\n",a/b);break;default:puts("无效运算符");return 1;}return 0;}
