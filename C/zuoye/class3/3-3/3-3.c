#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x<1){
        y=x;
        printf("%lf",y);
    }
    if(x>=1&&x<10){
        y=2*x-1;
        printf("%lf",y);
    }
    if(x>=10){
        y=3*x-11;
        printf("%lf",y);
    }
    return 0;
}