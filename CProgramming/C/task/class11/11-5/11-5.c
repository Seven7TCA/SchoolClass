#include <stdio.h>
int binSearch(int k, int n, int a[])
{
    int mid, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (a[mid] == k)
            break;
        else if (a[mid] > k)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (low > high)
        return -1;
    else
        return mid;
}
int main()
{
    int n, score[1000], i, r, k;
    printf("请输入成绩整数个数：");
    scanf("%d", &n);
    printf("请输入%d个按递增排列的成绩整数：", n);
    for (i = 0; i < n; i++)
        scanf("%d", &score[i]);
    printf("请输入要查找的成绩：");
    scanf("%d", &k);
    r = binSearch(k, n, score);
    if (r == -1)
        printf("%d成绩没有找到", k);
    else if (r >= 0)
        printf("该成绩在score[%d]处", r);
    else
        printf("error!");
    return 0;
}