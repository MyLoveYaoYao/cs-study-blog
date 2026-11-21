/*
 * 标准答案：FizzBuzz
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void) { for(int i=1;i<=100;i++){ if(i%15==0)puts("FizzBuzz"); else if(i%3==0)puts("Fizz"); else if(i%5==0)puts("Buzz"); else printf("%d\n",i);} return 0; }
