/* 

     1.���ڴ��ļ��б�д����������¹��ܣ�
       ����a��Ϊ1-9����������n��Ϊ1-16�����������������¹�ʽ�ĺ� a+aa+aaa+aaaa+.....      


*/

#include <stdio.h>

int main()
{
	int i,a,n,t;
	int sum=0;
	
	printf("Please input base value a:\n ");
	scanf("%d",&a);
	printf("Please input the num:\n" );
	scanf("%d",&n);

	t = a;

	for( i=0; i<n; i++)
	{
		sum += t;
		t = t*10+a;
	}

	printf("sum = %d\n", sum);
	
	return 0;
}