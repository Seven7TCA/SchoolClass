/* 
/*
3.	��������ļ���tele.dat���д����ѧ������ϵ��ʽ����ϵ��ʽ�����½ṹ��������������
        struct student_info {
	    char name[50];   //����
	    long int tele;   //�绰����
            };
        ���������ǰ9��ѧ���������͵绰���롣
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
