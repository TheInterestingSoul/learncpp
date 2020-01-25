#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int ds,ct,rs=0;
    cin>>ds>>ct;
    int *l;
    l=new int[ds+1]; //动态长度数组
    for(int i=0;i<=ds;i++) l[i]=0;
    struct t{
        int start;
        int end;
    };
    t tree[ct];
    for(int i=0;i<ct;i++){
        cin>>tree[i].start>>tree[i].end;
        for(int j=tree[i].start;j<=tree[i].end;j++){
            l[j]=1; //flag=1为砍掉，0为没砍
        }
    }
    for(int i=0;i<=ds;i++){
        if(l[i]==0) rs+=1;
    }
    cout<<rs;
    return 0;
}