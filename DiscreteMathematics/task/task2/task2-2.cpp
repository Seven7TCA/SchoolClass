#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i,j,r,num;
    char s1[2000],s2[2000];
    while(cin>>s1){
        if(s1[0]=='#' && strlen(s1)==1)
            break;
        cin>>s2;
        num=0;
        for(i=0;i<strlen(s1);i++){
            if(s1[i]==s2[0]){
                r=0;
                for(j=0;j<strlen(s2);j++){
                    if(s1[i+j]==s2[j]) r=1;
                    else r=0;
                }
                if(r){
                    num++;
                    i+=strlen(s2)-1;
                }
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
