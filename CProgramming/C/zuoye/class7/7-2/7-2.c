#include <stdio.h>
#define MAX 7
int main(){
    int  a[MAX],i,m;
    printf("数组为a[MAX]",MAX);
    for(i=0;i<MAX;i++)
    scanf("%d",&a[i]);
    for(i=0,m=0;i<MAX;i++){
        if(a[m]<a[i]) m=i;
}
    printf("%d",a[m]);
    return 0;
}

