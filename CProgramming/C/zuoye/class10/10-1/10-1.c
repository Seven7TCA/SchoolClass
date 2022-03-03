#include <stdio.h>
void jud(int x);
int main()
{
    int a;
    printf("please input\n");
    scanf("%d", &a);
    jud(a);
    return 0;
}

void jud(int x)
{
    if ((x % 2) == 0)
        printf("偶");

    else
        printf("奇");
}