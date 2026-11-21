/*
 * 标准答案：我的第一张名片
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>

int main(void) {
    char name[40], interest[40];
    int age;
    printf("姓名：");
    if (scanf("%39s", name) != 1) return 1;
    printf("年龄：");
    if (scanf("%d", &age) != 1 || age < 0) return 1;
    printf("兴趣：");
    if (scanf("%39s", interest) != 1) return 1;

    printf("\n-------- 个人名片 --------\n");
    printf("姓名：%s\n年龄：%d 岁\n兴趣：%s\n", name, age, interest);
    return 0;
}
