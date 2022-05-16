#include<stdio.h>
int main()
{
    int year;
    printf("请出入年份：/n");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("该年份是闰年");
    }
    else{
        printf("该年不是闰年");
    }
    return 0;
}