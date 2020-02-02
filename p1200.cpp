#include<cstdio>
using namespace std;

int main(){
    char a[7],b[7]; //a--彗星 b--队伍
    int moda=1,modb=1;
    bool taga=true,tagb=true;
    scanf("%s\n%s",a,b);
    for(int i=0;i<=6;i++){
        if(a[i]!='\0'&&taga) moda*=(a[i]-'A'+1); //为什么会自动往char数组'\0'后继续补'U'？
                                                 //也可以用正则：scanf("%[A-Z]\n%[A-Z]",a,b)
            else taga=false;
        if(b[i]!='\0'&&tagb) modb*=(b[i]-'A'+1);
            else tagb=false;
    }
    if((moda%47)==(modb%47)) printf("GO");
        else printf("STAY");
        return 0;
}