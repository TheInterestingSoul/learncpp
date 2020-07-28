#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int prime = 2; prime <= sqrt(n); prime++)
        {
            if(n % prime == 0) cout << ( n / prime );
        }
    return 0;
}