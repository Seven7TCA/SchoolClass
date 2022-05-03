#include <stdio.h>
#include <math.h>
void jud(int x);
int main(){
    int a;
    printf("please input\n");
    scanf("%d", &a);
    jud(a);
    return 0;
}
void jud(int x){
    int i;
    for (i = 2; i <= (int)sqrt(x); i++){
        if (x % i == 0)
            break;
    }
    if (i >= (int)sqrt(x) + 1)
        printf("yes");
    else
        printf("no");
}