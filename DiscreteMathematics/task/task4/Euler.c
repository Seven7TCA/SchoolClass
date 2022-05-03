#include <stdio.h>

int Euler(int n){
    int ret=n;
    for (int i = 2; i*i <= n; i++){
        if (n%i==0){
            ret=ret/i *(i-1);
            while (n%i ==0){
                n/=i;
            }
        }
    }
    if(n>1){
        ret = ret / n *(n-1);
    }
    return ret;
}

int main(){
    int n,sum=0,k;
    printf("input n\n");
    scanf("%d",&n);
    for (int i = 1; i*i < n; i++){
        if ( n % i ==0){
            sum += i* Euler ( n/i );
        }
        k = n / i;
        if (n % k ==0 && i!= k){
                sum += k* Euler( n/k );
        }
    }
    printf("∑ i (gcd（i, N ）)=%d",sum);
    return 0;
}