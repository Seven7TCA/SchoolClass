#include<stdio.h> 
int cal(int x, int y);
int de(int i, int j, int k);

int main(){
    int a, b, m;
    printf("please input(the first shall be bigger than the secnd one)\n");
    scanf("%d,%d", &a, &b);
    printf("%d\n", cal(a, b));
    m = cal(a, b);
    printf("%d", de(a, b, m));
    return 0;
}

int cal(int x, int y){
    int q;
    while (x % y != 0){
        q = x % y;
        x = y;
        y = q;
    }
    return y;
}

int de(int i, int j, int k){
    int n;
    n = (i * j) / k;
    return n;
}