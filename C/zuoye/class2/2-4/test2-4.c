#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a/1000+a%1000/100*10+a%100/10*100+a%10*1000;
    printf("%d",b);
    return 0;
}