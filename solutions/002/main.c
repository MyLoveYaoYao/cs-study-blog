/*
 * 标准答案：两数计算器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    double a, b;
    printf("输入两个实数：");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    printf("和：%.4f\n差：%.4f\n积：%.4f\n", a+b, a-b, a*b);
    if (b == 0) printf("商：除数不能为 0\n");
    else printf("商：%.4f\n", a/b);
    return 0;
}
