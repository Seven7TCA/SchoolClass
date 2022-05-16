#include <stdio.h>
#define MAX 3
int main(){
    int a[MAX][MAX],i,j,m=0,n=0;
    printf("输入一个二维数组a[MAX][MAX]");
    for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++)
            if(a[i][j]>a[m][n]){
                m=i;
                n=j;
                }
}
    printf("a[%d][%d],%7d",m,n,a[m][n]);
    return 0;
}

