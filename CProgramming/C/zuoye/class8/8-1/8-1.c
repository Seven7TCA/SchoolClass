#include <stdio.h>
#define MAX 100
int main()
{
    int a[MAX],i,j,n,k;
    printf("输入n：");
    scanf("%d",&n);
    printf("输入数组：");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){ 
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    printf("新数组：");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}

