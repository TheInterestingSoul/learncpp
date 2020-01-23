#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a;
    float b;
    cin>>a;
    if(a<150) b=a*0.4463;
        else if(a>150 && a<=400) b=150*0.4463+(a-150)*0.4663;
            else if(a>400) b=150*0.4463+250*0.4663+(a-400)*0.5663;
    cout<<fixed<<setprecision(1)<<b;
    return 0;
    
}