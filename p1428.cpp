#include<iostream>
using namespace std;

int main(){
    int ct,*fh,rs=0;
    cin>>ct;
    fh=new int[ct];
    for(int i=0;i<ct;i++){
        cin>>fh[i];
        int a=i;
        while(a>=0){
            if(fh[a]<fh[i]) rs++;
            a--;
            }
        cout<<rs<<' ';
        rs=0;
        }
    return 0;
}