#include<stdio.h>
int main()
{
    double i,f;
    for (i = 1,f=1.01; i < 365; i++)
    {
        f*=f;
    }
    printf("%lf",f);
    return 0;
}