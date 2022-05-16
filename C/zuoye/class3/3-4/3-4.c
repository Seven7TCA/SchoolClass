#include<stdio.h>
int main()
{
    float chenji;
    printf("输入你的成绩：");
    scanf("%f",&chenji);
    switch((int)(chenji/10)){
        case 10:
        case 9:printf("A\n");break;
        case 8:printf("B\n");break;
        case 7:printf("C\n");break;
        case 6:printf("D\n");break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:printf("E\n");break;
        default:printf("错误\n");
    }
    return 0;
}