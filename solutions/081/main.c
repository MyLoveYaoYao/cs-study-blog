/*
 * 标准答案：模块化单位换算库
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
double celsius_to_fahrenheit(double c){return c*9.0/5.0+32;}double km_to_miles(double km){return km*0.621371;}double kg_to_pounds(double kg){return kg*2.20462;}int main(void){int op;double value;puts("1温度 2距离 3重量");if(scanf("%d",&op)!=1)return 1;printf("输入数值：");if(scanf("%lf",&value)!=1)return 1;if(op==1)printf("%.2f F\n",celsius_to_fahrenheit(value));else if(op==2)printf("%.4f miles\n",km_to_miles(value));else if(op==3)printf("%.4f lb\n",kg_to_pounds(value));else puts("无效选项");return 0;}
