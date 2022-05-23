#include<stdio.h>
#define M 100
int main(){
    int a[M][M],i,j,n,v1,v2,w,sum=0;
    printf("Number of  points:\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
        for ( j = 1; j <= n; j++){
            a[i][j]=0;
        }
    printf("Enter the weight of the edge\n");
    while(scanf("%d %d %d",&v1,&v2,&w)&&w!=0){
        a[v1][v2]=w;
        a[v2][v1]=w;
    }
    printf("adjacency matrix:\n");
    for ( i = 1; i <= n; i++){
        for ( j = 1; j <= n; j++){
            printf("%3d",a[i][j]);
        }
    printf("\n");
    }
    for ( i = 1; i <= n; i++,sum=0){
        for ( j = 1; j <= n; j++){
            if(a[i][j]!=0) sum++;
        }
        printf("The degree of edge V%d is %d\n",i,sum);
    }
    return 0;
}