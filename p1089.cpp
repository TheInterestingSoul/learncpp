#include<iostream>
using namespace std;

int main(){
    int a[12],b=0,c=0,d=0; //a--预计，b--剩的，c--存的
    for(int i=0;i<=11;i++) cin>>a[i];
    for(int i=0;i<=11;i++){
        b+=300; //得到零花钱
        if(b<a[i]){
            d=i+1;
            break;
        } //先判断是否够用
        b-=a[i]; //花掉
        if(b>=100){
            int e;
            e=(b/100)*100;
            c+=e;
            b-=e;
        }
    }
    if(d!=0) cout<<'-'<<d;
    else cout<<1.2*c+b;
    return 0;
}