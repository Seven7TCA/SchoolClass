#include <stdio.h>
int main()
{
    int m,n,h;
    for (m=546,n=429,h=0 ; n!=0; )
    {
        h=n;
        n=m%n;
        m=h; 
    }
    printf("%d",m);
    return 0;
}