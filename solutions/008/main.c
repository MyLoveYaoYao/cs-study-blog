/*
 * 标准答案：购物小票
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    double price, discount;
    int quantity;
    printf("输入单价、数量和折扣百分比：");
    if (scanf("%lf %d %lf", &price, &quantity, &discount) != 3 || price < 0 || quantity < 0 || discount < 0 || discount > 100) {
        printf("输入无效\n");
        return 1;
    }
    double original = price * quantity;
    double payable = original * (1.0 - discount / 100.0);
    printf("原价：%.2f\n折扣：%.0f%%\n应付：%.2f\n", original, discount, payable);
    return 0;
}
