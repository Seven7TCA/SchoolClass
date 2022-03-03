#include<stdio.h>
#define N 17
int f(int n){
    int s;
    if (n==1||n==2)
        s=1;
    else
        s=f(n-1)+f(n-2);
    return s;
}
int main(){
    int a[N],i,n=N,m;
    for ( i = 0; i < N; i++,n--)
        a[N-i-1]=f(n);
    for ( i = 0,m=1; i < N; i++,m++)
    {
        printf("%5d",a[i]);
        if (m % 5 == 0 )
            printf("\n");
    }
    return 0;
}