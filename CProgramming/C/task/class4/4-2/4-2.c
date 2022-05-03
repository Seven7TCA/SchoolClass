#include<stdio.h>
int main()
{
    int i;
    double f;
    for ( i = 1,f=0.1; i <=50; i++)
    {
        f*=2;
    }
    printf("%.1lf",f);
    return 0;
}