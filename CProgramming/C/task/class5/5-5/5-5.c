#include <stdio.h>
int main()
{
    int i=1,j=1,m,h;
    printf("%d %d ",i,j);
    for ( m = 1; m <=18 ; m++)
    {
        h=i;
        i=i+j;
        j=h;
        printf("%d ",i);
    }
    return 0;
}