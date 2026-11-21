# C 语言练手项目标准答案

每个目录包含一份可编译、可运行的参考实现：

- `001/main.c` 对应第 1 题
- `100/main.c` 对应第 100 题

编译任意一个答案：

```sh
cd 001
gcc main.c -o main
./main
```

Windows 可运行 `main.exe`。

第 99 题在 Windows 上需要链接 Winsock：

```sh
cd 099
gcc main.c -o main.exe -lws2_32
main.exe
```

建议先独立完成再查看答案。参考实现优先保证核心要求可运行，复杂综合题可能只实现第一版可运行范围；遇到编译器差异或平台能力差异，可根据注释调整。
