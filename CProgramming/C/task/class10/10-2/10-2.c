#include <stdio.h>
int ca(int x);
int main()

{
    int a;
    printf("please input\n");
    scanf("%d", &a);
    ca(a);
    printf("%d", ca(a));
    return 0;
}

ca(int x)
{
    int i, j;
    for (i = 1, j = 1; i <= x; i++)
    {
        j *= i;
    }
    return j;
}