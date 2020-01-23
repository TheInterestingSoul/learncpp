#include<iostream>
using namespace std;

int main(){
    float a=2,b,c;
    int d=0;
    cin>>b;
    while(c<=b){
        c+=a;
        a=a*0.98;
        d+=1;
    }
    cout<<d;
    return 0;
}