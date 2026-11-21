/*
 * 标准答案：摄氏华氏换算器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    double c, f;
    printf("输入摄氏温度：");
    if (scanf("%lf", &c) != 1) return 1;
    f = c * 9.0 / 5.0 + 32;
    printf("华氏温度：%.2f\n", f);
    printf("再输入华氏温度：");
    if (scanf("%lf", &f) != 1) return 1;
    c = (f - 32) * 5.0 / 9.0;
    printf("摄氏温度：%.2f\n", c);
    return 0;
}
