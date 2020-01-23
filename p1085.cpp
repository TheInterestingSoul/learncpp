#include<iostream>
using namespace std;

int main()
{
    struct st
    {
        int week;
        int hour1;
        int hour2;
        int total;
    };
    st a[7];
    int unhappy=0,day;
    for(int i=0;i<=6;i++){
        cin>>a[i].hour1>>a[i].hour2;
        a[i].week=i+1;
        a[i].total=a[i].hour1+a[i].hour2;
        if(unhappy!=0){
            if(a[i].total>unhappy){
                unhappy=a[i].total;
                day=a[i].week;
            }
        }
            else{
                unhappy=a[i].total;
                day=a[i].week;
            }
    }
    cout<<day;
    return 0;
}
