#include <stdio.h>
#define SIZE 100
int main()
{
    char str1[SIZE], str2[SIZE];
    int i, j, n, l;
    printf("请输入字符串:");
    gets(str1);
    printf("请输入指定位数：");
    scanf("%d", &n);
    printf("请输入子串的长度：");
    scanf("%d", &l);
    for (i = n - 1, j = 0; j < l; i++, j++)
        str2[j] = str1[i];
    str2[j] = '\0';
    printf("子串为：");
    puts(str2);
    return 0;
}
