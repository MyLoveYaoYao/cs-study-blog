/*
 * 标准答案：秒数拆分器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    long long seconds;
    printf("输入非负秒数：");
    if (scanf("%lld", &seconds) != 1 || seconds < 0) return 1;
    long long days = seconds / 86400; seconds %= 86400;
    long long hours = seconds / 3600; seconds %= 3600;
    long long minutes = seconds / 60; seconds %= 60;
    printf("%lld 天 %lld 小时 %lld 分钟 %lld 秒\n", days, hours, minutes, seconds);
    return 0;
}
