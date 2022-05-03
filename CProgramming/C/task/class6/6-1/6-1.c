#include <stdio.h>

int main()

{
    int i,n,m,x;
    x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(m=i;m!=0;m=m/10){
            if(m%10==1){
            x++;
            break; 
            }
        }
    }
    printf("%d",x);
    return 0;
}

