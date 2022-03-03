#include <stdio.h>
#define MAX 10
int main(){
    int a[MAX][MAX],i,j,n,m=0,l=1;
    printf("输入一个n：（请输入一个小于10的n）");
    scanf("%d",&n);
    if (n<=10){
        printf("输入数组：");
        for (i = 0; i < n; i++)
            for ( j = 0; j < n; j++)
                scanf("%d",&a[i][j]);
        for ( j = 0; j < n; j++){
            for ( i = 0; i < l; i++)
            {
                m+=a[i][j];
            }
            l++;
        }
        printf("方阵的上三角元素之和为%d",m);
    }
    if (n>10)
    {
        printf("请输入一个小于10的n");
    }
    return 0;
}