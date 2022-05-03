#include <stdio.h>

void deposit(int b[], int n)
{
    int j, m;
    for (j = 0; j < n / 2; j++)
    {
        m = b[j];
        b[j] = b[n - j - 1];
        b[n - j - 1] = m;
    }
}
int main()
{
    int a[100];
    int n, i;
    printf("输入一个大于0的n:");
    scanf("%d", &n);
    printf("输入一个一维数组：");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("输入的一维数组为：");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
    deposit(a, n);
    printf("\n逆序存放后的数组为：");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
    return 0;
}

​