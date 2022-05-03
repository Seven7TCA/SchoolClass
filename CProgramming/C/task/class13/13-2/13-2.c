#include<stdio.h>
#define MAX 15
int main(){
    int i,x,a[MAX],n;
    int *p;
    printf("shuru x:");
    scanf("%d",&x);
    printf("shuru shuzu changdu:");
    scanf("%d",&n);
    printf("shuru shuzu a:");
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for ( p=( a + n); (*(p-1)>x)&&(p>a); p--)
        *p=*(p-1);
    *p=x;
    for ( i = 0; i <=n; i++)
        printf("%3d",a[i]);
    printf("\n");
    return 0;
}