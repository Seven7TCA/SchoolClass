#include<stdio.h>
int main()
{
    int i,f,h;
    for ( i = 1,f=1,h=0; i <=10;i++ )
    {
        f=i*f;
        h+=f;
    }
    printf("%d",h);
    return 0;
}