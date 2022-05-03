#include <stdio.h>
#include <string.h>
#define SIZE 100
int main()
{
    char str1[SIZE], str2[SIZE];
    int i, j, m;
    printf("输入str1");
    gets(str1);
    printf("输入str2:");
    gets(str2);
    j = strlen(str1);
    for (i = 0; i < SIZE; i++)
    {
        m = i + j;
        str1[m] = str2[i];
    }
    puts(str1);
    return 0;
}
