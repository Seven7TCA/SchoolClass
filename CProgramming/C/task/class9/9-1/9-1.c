#include <stdio.h>
#define SIZE 100
int main()
{
    char str1[SIZE], str2[SIZE];
    int i = 0;
    while ((str2[i] = getchar()) != '\n')
        i++;
    str2[i] = '\0';
    for (i = 0; i < SIZE; i++)
    {
        if (str2[i] != '\0')
            str1[i] = str2[i];
        if (str2[i] = '\0')
            break;
    }
    str1[i] = '\0';
    printf("%s", str1);
    return 0;
}