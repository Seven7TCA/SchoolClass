#include <stdio.h>
#define MAX 100
int main(){
    int a[MAX],i,t,j,n,k;
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
    printf("新数组：");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}