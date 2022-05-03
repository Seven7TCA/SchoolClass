#include<stdio.h>
struct student {
    char name[20];
    char gender[20];
    int birth;
    int grade;
}s[100];

int main(){
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++){
        printf("Enter student information:");
        scanf("%s%s%d%d",s[i].name,s[i].gender,
        &s[i].birth,&s[i].grade);
    }
    for ( i = 0; i < n; i++)
        if (20211230 - s[i].birth >= 180000)
            printf("%s\t%s\t%d\t%d\n",s[i].name,s[i].gender,
            s[i].birth,s[i].grade);
        else 
            continue;
    return 0;
}
