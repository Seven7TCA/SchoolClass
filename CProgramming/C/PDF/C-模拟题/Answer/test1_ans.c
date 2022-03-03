/* 

     1.请在此文件中编写程序，完成以下功能：
       输入a（为1-9的整数）、n（为1-16的整数），计算以下公式的和 a+aa+aaa+aaaa+.....      


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