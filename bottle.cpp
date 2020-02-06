/*瓶盖问题
* 一瓶汽水price元，
* prb个瓶身换一瓶再喝，
* prc个瓶盖也可以换一瓶，
* 现有money元
* 问最多喝到多少瓶
*
* 输入：money price prb prc
* 均为正整数
* 输出：一个数（rs）
*/
#include<iostream>
using namespace std;

int bottle,cap,rs=0,money,price,prb,prc;

void get_bottle(){
    int i=bottle/prb;
    rs+=i;
    bottle=bottle-(i*prb)+i;
    cap+=i;
    if(bottle/prb>0) get_bottle(); // 还可以换，则继续掏空瓶身
    return;
}

void get_cap(){
    int i=cap/prc;
    rs+=i;
    cap=cap-(i*prc)+i;
    bottle+=i;
    if(cap/prc>0) get_cap(); // 还可以换，则继续掏空瓶盖
    return;
}

int main(){
    cin>>money>>price>>prb>>prc;
    rs=money/price; //先全部买掉
    cap=rs;
    bottle=rs;
    while((bottle/prb>0)||(cap/prc>0)){ //瓶盖或瓶身任意一类还能换即可
        get_bottle();
        get_cap();
        }
    cout<<rs;
    return 0;
    }
