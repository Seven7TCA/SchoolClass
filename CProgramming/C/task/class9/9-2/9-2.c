#include <stdio.h>
#define SIZE 100
int main()
{
    char str1[SIZE], str2[SIZE],str3[SIZE];
    int i = 0, j = 0;
    printf("请输入字符串一");
    while ((str1[i] = str3[i] = getchar()) != '\n')
        i++;
    str1[i] = '\0';
    printf("输入字符串二");
    while ((str2[j] = str3[i+j] = getchar() ) != '\n')
        j++;
    str2[j]='\0';
    str3[i+j]='\0';
    printf("生成的字符串三如下：\n");
    puts(str3);
    return 0;
}