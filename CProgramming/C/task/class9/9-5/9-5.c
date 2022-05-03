#include<stdio.h>
#include<string.h>
#define SIZE 100
int main(){
    char string[SIZE],str1[SIZE],str2[SIZE],str3[SIZE],str4[2][SIZE];
    int i,j;
    printf("请依次输入3个数组");
    for ( i = 0; i < 3; i++)
        gets(str4[i]);
    strcpy(str1,str4[0]);
    strcpy(str2,str4[1]);
    strcpy(str3,str4[2]);
    printf("字符数组为：\n");
    for ( i = 0; i < 3; i++)
        printf("%s\n",str4[i]);
    if(strcmp(str1,str2)>0)
        strcpy(string,str1);
    else
        strcpy(string,str2);
    if (strcmp(str3,string)>0)
        strcpy(string,str3);
    printf("三个字符串最大的是：%s",string);
    return 0;
}