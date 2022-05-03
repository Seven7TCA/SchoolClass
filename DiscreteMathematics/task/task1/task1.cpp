#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000001;
int a[MAXN];
int main(){
    int n,m,i,j,w;
    int* p=new int[n];  //动态数组
    cout<<"input n,m"<<endl;
    cin>>n>>m; //输入n，m

    cout<<"input numbles"<<endl;
    for ( i = 0; i < n; i++){
        cin>>p[i];
    }//输入n个数存储在动态数组中
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++){
            if (p[j]>p[j+1]){
                w=p[j]; p[j]=p[j+1]; p[j+1]=w;
            }//p[j]<->p[j+1]
        }//冒泡排序m次得前m大的数
    for ( i = n-1; i > n-m-1 ; i--){
        cout<<p[i]<<" ";
    }//输出前m大的数
    //冒泡排序

    cout<<endl<<"plz input same numbles"<<endl;
    for ( i = 0; i < n; i++){
        cin>>p[i];
    }//输入n个数存储在动态数组中
    sort(p,p+n);
    for( i = n-1; i >= n-m; i--){   //打印前m大的数
            if(i == n-m)  printf("%d\n", p[i]);
            else            printf("%d ", p[i]);
        }//快速排序

    while(~scanf("%d,%d", &n, &m)){
        memset(a, 0, sizeof(a));
        for(int i=0; i<n; i++){
            int t;
            scanf("%d", &t); 
            a[500000+t]=1;
        }
        for(int i=MAXN; m>0; i--)
            if(a[i]){
                if(m>1)  printf("%d ", i-500000);
                else      printf("%d\n", i-500000);
                m--;
            }
    }
    return 0;
}