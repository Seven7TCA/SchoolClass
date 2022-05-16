#include <stdio.h>
#define MAX 3
int main(){
    int a[MAX][MAX],i,j,m,n,o=0;
    printf("输入数组：");
    for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<MAX;i++){
        m=a[i][1]+a[i][2]+a[i][0];
        printf("第%d行的数和为：%d\n",i,m);
    }
    for(j=0;j<MAX;j++){
        n=a[0][j]+a[1][j]+a[2][j];
        printf("第%d列的数和为：%d\n",j,n);
    }
    for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++)
            o+=a[i][j];
    printf("所有数的和为：%d",o);
    return 0;
}

