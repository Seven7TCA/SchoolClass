#include<stdio.h>
int main()
{
    int i;
    double j,h,m,n;
    for ( i = 1,j=1.0,h=1.0,m=0.0,n=1.0; i < 21; i++)
    {
        n=j;
        j=h;
        h+=n;
        m+=h/j;
    }
    printf("%lf",m);
    return 0;
}