/*
 * 标准答案：网络聊天室（进阶选做）
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#if defined(_WIN32)
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib,"ws2_32.lib")
#else
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netinet/in.h>
#include <string.h>
#endif
#include <stdio.h>
int main(int argc,char **argv){if(argc!=2){puts("用法：chat.exe server|client");return 1;}
#if defined(_WIN32)
WSADATA wsa;if(WSAStartup(MAKEWORD(2,2),&wsa)!=0)return 1;
#endif
int s=socket(AF_INET,SOCK_STREAM,0);struct sockaddr_in addr={0};addr.sin_family=AF_INET;addr.sin_port=htons(4000);if(strcmp(argv[1],"server")==0){addr.sin_addr.s_addr=htonl(INADDR_ANY);bind(s,(struct sockaddr*)&addr,sizeof addr);listen(s,1);int c=accept(s,NULL,NULL);char msg[256];recv(c,msg,sizeof msg-1,0);msg[255]='\0';printf("收到：%s\n",msg);
#if defined(_WIN32)
closesocket(c);closesocket(s);WSACleanup();
#else
close(c);close(s);
#endif
}else{inet_pton(AF_INET,"127.0.0.1",&addr.sin_addr);if(connect(s,(struct sockaddr*)&addr,sizeof addr)!=0){puts("连接失败，请先启动server");return 1;}char msg[256];printf("发送：");if(!fgets(msg,sizeof msg,stdin))return 1;send(s,msg,(int)strlen(msg),0);
#if defined(_WIN32)
closesocket(s);WSACleanup();
#else
close(s);
#endif
}return 0;}
