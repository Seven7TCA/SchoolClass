/* 

     2.	在源程序文件“C:\素材\test2c.c”中，编写程序，完成以下功能，并将test2c.c文件保存到“C:\KS”文件夹（10分）：
    从键盘上输入一行少于100个字符的字符串，调用函数统计字符串中英文字母的个数，然后输出结果。函数定义如下：
    int charac( char str[] )。

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
     
	printf("请输入字符串");
	gets(str);
    count=charac(str);
	printf("英文字母个数=%d\n",count);
    return 0;
}
