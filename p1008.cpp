#include<iostream>
using namespace std;

int main(){
    for(int i=100;i<=333;i++){
        int i2=2*i,i3=3*i;
        int ia=i/100,ib=(i/10)-(ia*10),ic=i%10;
        int i2a=i2/100,i2b=(i2/10)-(i2a*10),i2c=i2%10;
        int i3a=i3/100,i3b=(i3/10)-(i3a*10),i3c=i3%10;
        if((ia+ib+ic+i2a+i2b+i2c+i3a+i3b+i3c==45)&&(ia*ib*ic*i2a*i2b*i2c*i3a*i3b*i3c==1*2*3*4*5*6*7*8*9)) cout<<i<<' '<<i2<<' '<<i3<<endl;
    }
    return 0;
}