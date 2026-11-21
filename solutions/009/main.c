/*
 * 标准答案：时间加法器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    int h1, m1, h2, m2;
    printf("输入第一个时刻（小时 分钟）：");
    if (scanf("%d %d", &h1, &m1) != 2) return 1;
    printf("输入第二个时刻（小时 分钟）：");
    if (scanf("%d %d", &h2, &m2) != 2) return 1;
    int total = (h1 + h2) * 60 + m1 + m2;
    printf("相加结果：%d 小时 %d 分钟\n", total / 60, total % 60);
    return 0;
}
