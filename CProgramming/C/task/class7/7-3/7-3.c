#include <stdio.h>
#define MAX 1000
int main(){
    int a[MAX],n,i,m;
    printf("请输入数组的大小:\n");
    scanf("%d",&n);
    printf("输入数组a[%d]\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n/2;i++){
        m=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=m;
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}

