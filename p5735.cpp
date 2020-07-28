#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(fabs(x1-x2),2) + pow(fabs(y1-y2),2));
}

int main()
{
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a,b,c;
    a=distance(x1,y1,x2,y2);
    b=distance(x1,y1,x3,y3);
    c=distance(x3,y3,x2,y2);
    cout.setf(ios::showpoint);
    cout << fixed << setprecision(2) << a+b+c;
    return 0;
}