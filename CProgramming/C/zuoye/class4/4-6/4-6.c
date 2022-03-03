#include<stdio.h>
int main()
{
    double i,f,e;
    for ( i = 1.0,e=1.0,f=1.0; i < 11 ; i++)
    {
        f=i*f;
        e=e+1.0/f;
    }
    printf("%lf",e);
    return 0;
}