#include<stdio.h>
int main()
{
    int a,n,i,s,h;
    scanf("%d,%d",&a,&n);
    for (i=1,s=1; i <= n; i++)
    {
        s*=10;
        h+=s/9*a;
    }
    printf("%d",h);
    return 0;
}