#include<stdio.h>
int main(){
    float a,b;
    float *p1,*p2,*p;
    p1=&a;
    p2=&b;
    printf("shuru a,b:");
    scanf("%f,%f",p1,p2);
    printf("a=%f,b=%f\n",a,b);
    p=p1;
    p1=p2;
    p2=p;
    printf("change a,b:a=%f,b=%f",*p1,*p2);
    return 0;
}