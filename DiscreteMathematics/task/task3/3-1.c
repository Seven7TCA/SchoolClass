#include<stdio.h>
#define MAX 6

int main(){
    int R[MAX][MAX],i,j,k,m,r2[MAX][MAX];
    printf("input r[6][6]\n");
    for ( i = 0; i < MAX; i++)
        for ( j = 0; j < MAX; j++){
            scanf("%d",&R[i][j]);
        }

    k=1;
    for ( i = 0; i < MAX; i++){
        if(R[i][i]!=1) k=0;
    }
    if(k==1)printf("have Reflexivity!\n");
    else printf("have no Reflexivity!\n");
    //判断自反性

    k=1;
    for ( i = 0; i < MAX; i++)
        for ( j = 0; j <= i; j++){
            if(R[i][j]!=R[j][i]) k=0;
        }
    if (k==1)printf("have Symmetry!\n");
    else printf("have no Symmetry!\n");
    //判断对称性

    for ( i = 0; i < MAX; i++)
        for ( j = 0; j < MAX; j++){
            for ( k = 0, m=0 ; k < MAX; k++){
                m += R[i][k]*R[k][j];
            }
            r2[i][j]=m;
        }
    i=0;j=0,k=1;
    while (R[i][j]==0){
        if (r2[i][j]!=0)  k==0;
        i++;j++;
    }
    
    if (k==1)  printf("have Transitivity!\n");
    else printf("have no Transitivity!\n");
    //判断传递性
    
    return 0;
}

