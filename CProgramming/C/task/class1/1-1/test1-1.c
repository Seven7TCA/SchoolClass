#include <stdio.h>
int main()
{
    int qian, geshu;
    char queren;
    FILE *fp;
    fp = fopen("test1-1.txt", "w");
    printf("\n\t\t红包数：\t");
    scanf("%d", &geshu);
    printf("\n\t\t单个金额：\t");
    scanf("%d", &qian);
    getchar();
    printf("\n\n\t我是土豪我要发（yes）\t不发了（no）\t");
    scanf("%c", &queren);
    printf("土豪你发了%d个红包，每个%d元钱\n别做梦了，你没钱！\n", geshu, qian);
    fprintf(fp, "土豪你发了%d个红包，每个%d元钱\n别做梦了，你没钱！\n", geshu, qian);
    fclose(fp);
    return 0;
}