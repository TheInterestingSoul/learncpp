#include<iostream>
using namespace std;

int main(){
    int ct,ls[100],rs=0;
    bool isctd[100];
    cin>>ct;
    for(int i=0;i<ct;i++){
        cin>>ls[i];
        isctd[i]=false;
        }
    for(int i=0;i<ct;i++){
        int a=ls[i];
        for(int i2=i+1;i2<ct;i2++){
            int b=ls[i2];
            for(int i3=0;i3<ct;i3++){
                if(a+b==ls[i3] && !isctd[i3]){
                rs++;
                isctd[i3]=true;
                }
            }
        }
    }
    cout<<rs;
    return 0;
}