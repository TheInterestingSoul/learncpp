//题目的意思不仅仅是1+4和4+1算重复，就算是1+4和2+3也算是重复的情况
//因此另开数组记录加出的和，去重，但打着麻烦

#include<iostream>
using namespace std;

int ct,ls[100]={},c[100]={},rs=0,flag=0;


bool isChecked(int num){
    for(int i=0;i<=flag;i++){
        if(c[i]==num) return false;
    }
    return true;
}

int main(){
    cin>>ct;
    for(int i=0;i<ct;i++) cin>>ls[i];
    for(int i=0;i<ct;i++){
        int a=ls[i];
        for(int i2=i+1;i2<ct;i2++){
            int b=ls[i2];
            for(int i3=i+2;i3<ct;i3++){
                if(a+b==ls[i3]&& isChecked(ls[i3])==true ){
                rs++;
                c[flag]=ls[i3];
                flag++;
                }
                    else if(a==ls[i3]+b && isChecked(a)==true ){
                    rs++;
                    c[flag]=a;
                    flag++;
                    }
                        else if(b==ls[i3]+a&& isChecked(b)==true ){
                    rs++;
                    c[flag]=b;
                    flag++;
                    }
            }
        }
    }
    cout<<rs;
    return 0;
}