#include <stdio.h>
void change(int *p1, int *p2);
int main()
{
    int a, b;
    printf("please input\n");
    scanf("%d,%d", &a, &b);
    change(&a, &b);
    printf("%d,%d", a, b);
    return 0;
}
void change(int *p1, int *p2)
{
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}