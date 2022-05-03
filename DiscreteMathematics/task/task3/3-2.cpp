#include <iostream>
#define M 10
using namespace std;

int getMinElement(int array[M][M],int num[M],int t){
    int Min = 0;
    int i=0;
    int j=0;
    for(i = 0; i < t; i++){
        int MinBlog=1;
        for (j = 0; j < t; j++) {
            if (!(array[i][j]==1)) {//不满足i<=j
                MinBlog=0;
                break;
            }
        }
        if (MinBlog) {
            Min = num[i];
            break;
        }
    }
    return Min;
}
int getMaxElement(int array[M][M],int num[M],int t){
    int Max = 0;
    int i=0;
    int j=0;
    for(j = 0; j < t; j++){
        int MaxBlog=1;
        for (i = 0; i < t; i++) {
            if (!(array[i][j]==1)) {
                MaxBlog=0;
                break;
            }
        }
        if (MaxBlog) {
            Max = num[j];
            break;
        }
    }
    return Max;
}
int getBigElement(int array[M][M],int num[M],int t){
    int Big = 0;
    int i=0;
    int j=0;
    for(i = 0; i < t; i++){
        int BigBlog=1;
        for (j = 0; j < t; j++) {
            if (array[i][j]!=0 ) {
                if(i!=j){
                    BigBlog=0;
                    break;
                }
                else continue;
            }
        }
        if (BigBlog) {
            Big = num[i];
            break;
        }
    }
    return Big;
}
int getSmallElement(int array[M][M],int num[M],int t){
    int Small = 0;
    int i=0;
    int j=0;
    for(j = 0; j < t; j++){
        int SmallBlog=1;
        for (i = 0; i < t; i++) {
            if (array[i][j]==1 ) {
                if(i!=j){
                    SmallBlog=0;
                    break;
                }
                else continue;
            }
        }
        if (SmallBlog) {
            Small = num[j];
            break;
        }
    }
    return Small;
}
int main(){
    cout<<"请输入集合元素个数："<<endl;
    int t=0;//集合元素个数
    cin>>t;
    int num[M];//存元素
    cout<<"请输入集合元素："<<endl;
    for(int i = 0; i < t; i++)
        cin>>num[i];
    
    int array[M][M];//关系矩阵
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            if(num[i]<=num[j]) array[i][j]=1;
            else array[i][j]=0;
        }
    }
    //输出矩阵
    cout<<"输出矩阵:"<<endl;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"最大值："<<endl;
    cout<<getMaxElement(array,num,t)<<endl;
    
    cout<<"最小值："<<endl;
    cout<<getMinElement(array,num,t)<<endl;

    cout<<"极大值："<<endl;
    cout<<getBigElement(array,num,t)<<endl;

    cout<<"极小值："<<endl;
    cout<<getSmallElement(array,num,t)<<endl;
}
