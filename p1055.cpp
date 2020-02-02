#include<cstdio>
using namespace std;

char isbn[14],sp;
int rs=0,ct=1;

int main(){
    scanf("%s",isbn);
    for(int i=0;i<11;i++){
        if(isbn[i]=='-')continue; //跳过分隔符
        rs+=(isbn[i]-'0')*ct;
        ct++;
    }
    rs=rs%11;
    if(rs==10) sp='X';
        else sp=rs+'0';
    if(sp==isbn[12])printf("Right");
        else{
            isbn[12]=sp;
            printf("%s",isbn);
        }
    return 0;
}