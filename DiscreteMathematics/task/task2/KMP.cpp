#include<iostream>
#include<cstring>
using namespace std;
int *Next(string a){
        int* next = new int[a.length()];
        next[0] = -1;          
        int j = 0;
        int k = -1;
        while (j < (int)a.length() - 1){
            if (k == -1 || a[j] == a[k]){
                j++;
                k++;
                next[j] = k;
            }
            else  k = next[k];
        }
        return next;
    }
int KMP(string b,string a){
        int i=0;
        int j=0;
        int* next=Next(a);
        while (i < (int)b.length() && j < (int)a.length()){
            if (j == -1 || b[i] == a[j]){
                i++;
                j++;
            }
            else  j=next[j];
        }
        if (j == (int)a.length()){
            return i-j;
        }
        return -1;
    }

int main(){
    string a,b;
    cin>>a>>b;
    cout<<KMP(a,b)<<endl;
    return 0;
}