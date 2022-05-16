#include <stdio.h>
int main()
{
    int x,y,m;
    for ( x = 0; x <= 24; x++)
    {
        y=(x*x+x)/10;
        for ( m = 0; m < y ; m++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}