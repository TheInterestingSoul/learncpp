#include<cstdio>
using namespace std;

int main(){
    int ct,*tp,rs=0,record=0;
    scanf("%d",&ct);
    tp=new int[ct];
    for(int i=0;i<ct;i++){
        scanf("%d",&tp[i]);
        if(i!=0&&tp[i]>tp[i-1]) rs++;
            else{
                    rs++;
                    if(rs>record) record=rs;
                    rs=0;
                }
    }
    printf("%d",record);
    delete tp;
    return 0;

}