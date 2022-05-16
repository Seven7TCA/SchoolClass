#include <stdio.h>
#define MAX 100
int main(){
    int a[MAX],i,t,j,n,k,m,low,high,mid;
    printf("输入n：");
    scanf("%d",&n);
    printf("输入数组：");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[k])
                k=j;
            if(k!=i){
                t=a[i];
                a[i]=a[k];
                a[k]=t;
            }
    }
    printf("输入一个数：");
    scanf("%d",&m);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(m == a[mid])
            break;
        else if(m>a[mid])
            low=mid+1;
        else high=mid+1;
    }
    if(low>high)
        printf("查无次数");
    else
        printf("该数在a[%d]",mid);
    return 0;
}