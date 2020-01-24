#include<iostream>
using namespace std;

int main(){
    int apple[10]={},height,rs;
    for(int i=0;i<10;i++){
        cin>>apple[i];
    }
    cin>>height;
    for(int i=0;i<10;i++){
        if(apple[i]<=height) rs+=1;
            else if(apple[i]<=height+30) rs+=1;
    }
    cout<<rs;
    return 0;
}