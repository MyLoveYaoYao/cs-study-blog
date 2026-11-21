/*
 * 标准答案：复数计算器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
typedef struct{double r,i;} Complex;int main(void){Complex a,b;printf("输入第一个复数的实部虚部：");scanf("%lf%lf",&a.r,&a.i);printf("输入第二个复数的实部虚部：");scanf("%lf%lf",&b.r,&b.i);Complex add={a.r+b.r,a.i+b.i},sub={a.r-b.r,a.i-b.i},mul={a.r*b.r-a.i*b.i,a.r*b.i+a.i*b.r};printf("加：%.2f%+.2fi\n减：%.2f%+.2fi\n乘：%.2f%+.2fi\n",add.r,add.i,sub.r,sub.i,mul.r,mul.i);return 0;}
