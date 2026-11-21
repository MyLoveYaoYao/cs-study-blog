/*
 * 标准答案：平均分计算器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    double a, b, c;
    printf("输入三门课分数：");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    double total = a + b + c;
    printf("总分：%.2f\n平均分：%.2f\n", total, total / 3.0);
    return 0;
}
