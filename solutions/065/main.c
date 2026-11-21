/*
 * 标准答案：待办清单文件版
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 */
#include <stdio.h>
#include <string.h>

typedef struct {
    char text[200];
    int done;
} Todo;

int main(void) {
    Todo a[100];
    int n = 0;
    FILE *f = fopen("todos.txt", "r");

    if (f) {
        while (n < 100 && fscanf(f, "%d %[^\n]", &a[n].done, a[n].text) == 2)
            n++;
        fclose(f);
    }

    int op;
    while (1) {
        puts("1 添加 2 完成 3 列出 0 保存退出");
        if (scanf("%d", &op) != 1)
            return 1;
        if (op == 0)
            break;
        if (op == 1) {
            while (getchar() != '\n')
                ;
            if (n >= 100)
                continue;
            printf("待办：");
            if (!fgets(a[n].text, sizeof(a[n].text), stdin))
                continue;
            a[n].text[strcspn(a[n].text, "\r\n")] = '\0';
            a[n].done = 0;
            n++;
        } else if (op == 2) {
            int k;
            printf("序号：");
            if (scanf("%d", &k) == 1 && k >= 1 && k <= n)
                a[k - 1].done = 1;
        } else if (op == 3) {
            for (int i = 0; i < n; i++)
                printf("%d. [%s] %s\n", i + 1,
                       a[i].done ? "完成" : "未完", a[i].text);
        }
    }

    f = fopen("todos.txt", "w");
    if (!f)
        return 1;
    for (int i = 0; i < n; i++)
        fprintf(f, "%d %s\n", a[i].done, a[i].text);
    fclose(f);
    return 0;
}
