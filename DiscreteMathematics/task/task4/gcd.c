#include <stdio.h>

int gcd(int a,int b){
    int x=a,y=b,r;
    while (y!=0){
        r= x % y;
        x=y;
        y=r;
    }
    return x;
}

int main(){
    int n,sum=0;
    printf("input n\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        sum += gcd(n,i);
    }
    printf("∑ i (gcd（i, N ）)=%d",sum);
    return 0;
}