#include <stdio.h>
#define MAX 12
int main(){
    int  a[MAX],i,m;
    for(i=0;i<MAX;i++){
        a[i]=i+1;
}
    for(i=0,m=1;i<MAX;i++,m++){
        printf("%3d",a[i]);
        if(m%4 == 0) 
            printf("\n");
}
    return 0;
}