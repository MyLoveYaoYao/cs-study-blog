/*
 * 标准答案：圆形测量工具
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    const double pi = 3.141592653589793;
    double radius;
    printf("输入圆的半径：");
    if (scanf("%lf", &radius) != 1 || radius <= 0) {
        printf("半径必须大于 0\n");
        return 1;
    }
    printf("周长：%.2f\n面积：%.2f\n", 2*pi*radius, pi*radius*radius);
    return 0;
}
