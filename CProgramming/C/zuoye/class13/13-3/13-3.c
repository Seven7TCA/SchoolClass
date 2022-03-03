#include<stdio.h>
#define MAX 20
int main(){
    char *p,*q,m,str[MAX];
    p=str;
    printf("shuru str[]");
    gets(str);
    while (*p!='\0')
        p++;
    q=p-1;
    p=str;
    while (p<q){
        m = *p;
        *p = *q;
        *q = m;
        p++;
        q--;
    }
    puts(str);
    return 0;
}