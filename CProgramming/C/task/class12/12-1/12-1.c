#include <stdio.h>
struct student {
    char name[20];
    char gender[20];
    int birth;
    int grade;
}stu1;
int main(){
    printf("Please enter a student's information:");
    scanf("%s%s%d%d",
    stu1.name,
    stu1.gender,
    &stu1.birth,
    &stu1.grade);
    
    printf("The student's information is:%s\t%s\t%d\t%d\n",
    stu1.name,
    stu1.gender,
    stu1.birth,
    stu1.grade);
    return 0;
}