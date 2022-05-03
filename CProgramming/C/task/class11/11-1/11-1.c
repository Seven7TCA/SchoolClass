#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("输入一个n");
    scanf("%d", &n);
    printf("结果是：%d", sum(n));
}
int sum(int n)
{
    int s;
    if (n < 0)
        printf("error!");
    else if (n == 0)
        s = 0;
    else
        s = n + sum(n - 1);
    return s;
}
