#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    char name[20];
    char gender[20];
    int birth;
    int grade;
}s[100];
int main(){
    int i=0,f=0,m=0,n=0,l=0,h=0;
    FILE *fp1,*fp2;
    fp1=fopen("./student.txt","r");
    fp2=fopen("./score.txt","w");
    if(fp2 == NULL){
        printf("file can't open!\n");
        exit(1);
    }
    if(fp1 == NULL){
        printf("file can't open!\n");
        exit(1);
    }
    while (!feof(fp1)){
        fscanf(fp1,"%s%s%d%d",s[i].name,s[i].gender,&s[i].birth,&s[i].grade);
        i++,n++;
    }
    fclose(fp1);
    for ( i = 0; i < n; i++){
        if (strcmp(s[i].gender,"M")==0){
            m+=s[i].grade;
            h++;
        }
        if (strcmp(s[i].gender,"F")==0){
            f+=s[i].grade;
            l++;
        }
    }
    fprintf(fp2,"The average grade of male students is:%d\n",m/h);
    fprintf(fp2,"The average grade of female students is:%d",f/l);
    fclose(fp2);
    return 0;
}