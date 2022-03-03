#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

struct student {
    int numble;
    int time;
}s[MAX];

int main(){
    char roll[10];
    int i=0,n;
    FILE *fp;
    fp=fopen("dianming.txt","r");
    if(fp == NULL){
        printf("file can't open!\n");
        exit(0);
    }
    while (!feof(fp)){
        fscanf(fp,"%d%d",&s[i].numble,&s[i].time);
        i++;
    }
    n=i;
    for(i=0;i<n;i++)
        printf("%d\t%d\n",s[i].numble,s[i].time);
    fclose(fp);
    for ( i = 0;i<n;i++){
        printf("%d",s[i].numble);
        printf("present or absent?");
        gets(roll);
        if (strcmp(roll,"present")==0)
            s[i].time++;
    }
    fp=fopen("dianming.txt","w");
    if (fp == NULL){
        printf("can't open!");
        exit(0);
    }
    for ( i = 0; i < n; i++)
        fprintf(fp,"%d\t%d\t",s[i].numble,s[i].time);
    fclose(fp);
    return 0;
}
