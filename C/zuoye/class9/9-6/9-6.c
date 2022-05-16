#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
int main()
{
    char name[SIZE], id[SIZE], day[SIZE];
    int i, j;
    FILE *fp1, *fp2;
    fp1 = fopen("id.txt", "r");
    if (fp1 == NULL)
    {
        puts("id.txt无法打开");
        exit(0);
    }
    fp2 = fopen("birthday.txt", "w");
    if (fp2 == NULL)
    {
        puts("birthday.txt无法打开");
        exit(0);
    }
    while (!feof(fp1))
    {
        fgets(name, SIZE, fp1);
        fgets(id, SIZE, fp1);
        for (i = 6, j = 0; i < 14; i++, j++)
            day[j] = id[i];
        fputs(name, fp2);
        fputs(day, fp2);
        fputc('\n', fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
