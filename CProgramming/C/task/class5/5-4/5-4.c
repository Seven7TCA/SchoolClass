#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,m,h;
    for ( i = 100,m=0; i <= 200; i++)
    {
        k=(int)sqrt(i);
        for ( j = 2 ; j <= k; j++){
            if(i % j ==0) break;
        }
        if (j>=k+1){
            printf("%d ",i);
            m++;
            if (m%5==0 && m!=0)
                printf("\n");
        }
    }
    return 0;
}