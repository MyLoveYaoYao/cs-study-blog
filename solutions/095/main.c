/*
 * 标准答案：文字冒险游戏
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
#include <string.h>
int main(void){int room=0,has_key=0,has_food=0;puts("文字冒险：输入 north/south/key/food/exit");char command[20];while(1){printf("当前位置：%s\n",room==0?"入口":room==1?"书房":"花园");printf("命令：");if(scanf("%19s",command)!=1)return 1;if(strcmp(command,"exit")==0)break;if(strcmp(command,"north")==0){room=1;puts("你进入书房");}else if(strcmp(command,"south")==0&&room==1){room=0;puts("回到入口");}else if(strcmp(command,"key")==0&&room==1){has_key=1;puts("捡到钥匙");}else if(strcmp(command,"food")==0&&room==0){has_food=1;puts("带上食物");}else if(strcmp(command,"south")==0&&room==0){room=2;if(has_key&&has_food){puts("获得两个物品，你打开花园门并获得胜利结局");break;}puts("你来到花园，但还缺少物品");}else puts("无法执行该命令");}return 0;}
