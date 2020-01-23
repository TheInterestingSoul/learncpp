#include<iostream>
using namespace std;

int main(){
    int mx,k,rs=0;
    cin>>mx>>k;
    chat s[7]={};
    snprintf(s, sizeof(s), "%d", mx);
    for(int i=1;i<=mx;i++){
        string ct=to_string(i);
        int len=ct.length();
        for(int j=0;j<=len-1;j++){
            char am=k;
            if(ct[j]==am) rs+=1;
        }
    }
    cout<<rs;
}