/* 

     2.	��Դ�����ļ���C:\�ز�\test2c.c���У���д����������¹��ܣ�����test2c.c�ļ����浽��C:\KS���ļ��У�10�֣���
    �Ӽ���������һ������100���ַ����ַ��������ú���ͳ���ַ�����Ӣ����ĸ�ĸ�����Ȼ���������������������£�
    int charac( char str[] )��

*/

#include <stdio.h>
#define LEN 100
int charac( char str[])
{
	int i,c=0;
	for(i=0;str[i]!='\0';i++)
		if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))c++;
	return(c);

}
int main()
{
    char str[LEN], count;
     
	printf("�������ַ���");
	gets(str);
    count=charac(str);
	printf("Ӣ����ĸ����=%d\n",count);
    return 0;
}
