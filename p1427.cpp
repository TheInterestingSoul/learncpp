#include<iostream>
using namespace std;

int main(){
    int a[101]={},b=0,c=0;
    while(true){
        cin>>b;
        if(b==0) break;
        a[c]=b;
        c++;
    }
    c--;
    while(true){
        cout<<a[c];
        c--;
        if(c<0) break;
        cout<<' ';
    }
    return 0;
}