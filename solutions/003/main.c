/*
 * 标准答案：矩形小助手
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    double length, width;
    printf("输入矩形的长和宽：");
    if (scanf("%lf %lf", &length, &width) != 2 || length <= 0 || width <= 0) {
        printf("输入无效：长和宽必须大于 0\n");
        return 1;
    }
    printf("面积：%.2f\n周长：%.2f\n", length * width, 2 * (length + width));
    return 0;
}
