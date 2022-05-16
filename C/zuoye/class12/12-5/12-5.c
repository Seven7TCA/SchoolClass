#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
struct people{
    char name[MAX];
    char id[MAX];
}s[MAX];
struct birth{
    char name[MAX];
    char birth[MAX];
}s2[MAX];

int main(){
    int i=0,n,j,m;
    FILE *fp1,*fp2;
    fp1=fopen("id.txt","r");
    if (fp1==NULL){
        printf("can't open");
        exit(1);
    }
    while (!feof(fp1)){
        fscanf(fp1,"%s%s",s[i].name,s[i].id);
        i++;
    }
    fclose(fp1);
    n=i;
    for ( i = 0; i < n; i++){
        for ( j = 0,m=6; m < 14; m++,j++){
            s2[i].birth[j]=s[i].id[m];
        }
        strcpy(s2[i].name,s[i].name);
    }
    fp2=fopen("birth.txt","w");
    if (fp2==NULL){
        printf("can't open");
        exit(1);
    }
    for ( i = 0; i < n; i++){
        fprintf(fp2,"%s\t%s\n",s2[i].name,s2[i].birth);
    }
    return 0;
}
