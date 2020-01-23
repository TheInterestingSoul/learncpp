#include<iostream>
using namespace std;

int main(){
    int wk,dy,de;
    cin>>wk>>dy;
    for(int i=1;i<=dy;i++){
        if(wk<6){
        de+=250;
        wk+=1;
        }else
        {
            if(wk==7) wk=1;
                else wk+=1;
        }
    }
    cout<<de;
}