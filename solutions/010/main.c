/*
 * 标准答案：单位转换菜单
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    int choice;
    double value;
    printf("1. 公里→英里  2. 公斤→磅\n请选择：");
    if (scanf("%d", &choice) != 1) return 1;
    printf("输入数值：");
    if (scanf("%lf", &value) != 1) return 1;
    switch (choice) {
        case 1: printf("%.4f 英里\n", value * 0.621371); break;
        case 2: printf("%.4f 磅\n", value * 2.20462); break;
        default: printf("无效菜单选项\n"); return 1;
    }
    return 0;
}
