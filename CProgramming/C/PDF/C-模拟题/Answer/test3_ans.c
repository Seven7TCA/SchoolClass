/* 
/*
3.	设二进制文件“tele.dat”中存放着学生的联系方式，联系方式由以下结构体类型来描述：
        struct student_info {
	    char name[50];   //姓名
	    long int tele;   //电话号码
            };
        请编程序，输出前9个学生的姓名和电话号码。
*/
*/


#include<stdio.h>
#include<stdlib.h>
#define MAX 9
struct  student_info{ 
     char name[50];
     Long int tele;
     }stud1[MAX];
int main()
{
    int i,n;
    FILE *fp;
    if(!(fp=fopen("tele.dat","rb")))
    {
       printf("system error");
       exit(0);
     }
     for(i=0;i<9;i++)
	fread(&stud1[i],sizeof(struct student_info),1,fp);
     for(i=0;i<9;i++)
	printf("%10s,%5ld\n",stud1[i].name,stud1[i].tele);
     fclose(fp);
     return 0;
}
