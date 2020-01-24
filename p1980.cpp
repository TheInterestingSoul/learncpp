#include<iostream>
using namespace std;

int main(){
    int mx,rs,ct=0;
    cin>>mx>>ct;
    for(int i=1;i<=mx;i++){
        int md=i;
        while(md!=0){ //每循环一次砍一位
            int a=md%10;
            md=md/10; //从低位到高位查a
            if(a==ct) rs+=1;
        }
    }
    cout<<rs;
    return 0;
}