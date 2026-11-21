/*
 * 标准答案：二分查找器
 * 编译：gcc main.c -o main
 * 运行：./main（Windows 使用 main.exe）
 *
 * 这是可编译、可运行的参考实现。先独立完成，再对照并重新手写。
 */
#include <stdio.h>
int main(void){int n,a[100],target;printf("升序元素个数：");if(scanf("%d",&n)!=1||n<1||n>100)return 1;printf("输入升序数组：");for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;printf("目标值：");if(scanf("%d",&target)!=1)return 1;int left=0,right=n-1,answer=-1;while(left<=right){int mid=left+(right-left)/2;if(a[mid]==target){answer=mid;break;}if(a[mid]<target)left=mid+1;else right=mid-1;}printf(answer>=0?"找到，下标%d\n":"未找到\n",answer);return 0;}
