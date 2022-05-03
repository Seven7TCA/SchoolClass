#include<stdio.h>
int a=4,b=5;
void exchange(){
    int t;
    t=a;a=b;b=t;
    return;
}
int main(){
    exchange();
    printf("%d,%d",a,b);
    return 0;
}