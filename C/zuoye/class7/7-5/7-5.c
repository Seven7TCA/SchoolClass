#include <stdio.h>
#define MAX 100
int main(){
    int a[MAX],i,j,m,n;
    printf("输入个n");
    scanf("%d",&n); 
    printf("输入一个一维数组a[MAX]");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("你要查找的数；");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(m==a[i]) {
            printf("查找的数是a[%d]",i);
            break;
        }

        if(i==n){
            printf("查无此数");
        }
    }
    return 0;
}

