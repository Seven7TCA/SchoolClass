#include <stdio.h>
float sum(int n);
int main(){
    int n;
    printf("输入一个n");
    scanf("%d", &n);
    printf("结果是：%f", sum(n));
}
float sum(int n)
{
    float s;
    if (n < 0)
        printf("error!");
    else if (n == 0)
        s = 0;
    else
        s = 1 / float (n)+ sum( n - 1);
    return s;
}