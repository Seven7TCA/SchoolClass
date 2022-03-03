#include <stdio.h>
#define M 3
#define N 4
int main(){
    int a[M][N],b[N][M],i,j;
    printf("输入数组：");
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
            b[i][j]=a[j][i];
    for(i=0;i<N;i++){
        for(j=0;j<M;j++)
            printf("%4d",b[i][j]);
    printf("\n");
    }
    return 0;
}