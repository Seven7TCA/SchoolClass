#include<stdio.h>
int main()
{
    int sum,word,space,number,other;
    sum=word=space=number=other=0;
    char c;
    while ((c=getchar())!='\n')
    {
        if(( c >= 'a' && c <= 'z')|| ( c >= 'A' && c <= 'Z' ))
        {
            word++;
        }
        else if ( c == ' ')
        {
            space++;
        }
        else if ( c >= '0' && c <= '9')
        {
            number++;
        }
        else
        {
            other++;
        }
        sum++;
    }
    printf("统计出字符总数%d个,其中\n英文字母%d个\n空格%d个\n数字%d个\n其他字符%d个\n",sum,word,space,number,other);
    return 0;
}