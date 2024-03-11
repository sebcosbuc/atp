#include <iostream>
#include <math.h>
using namespace std;

double f(double x)
{
    return pow(x,3)+2*pow(x,2)+3*x+4;
}

double df(double x)
{
    return 3*pow(x,2)+4*x+3;
}

double ddf(double x)
{
    return 6*x+4;
}

int main()
{
    int i=0;
    double a,b,eps,x,xp;
    cin>>a>>b>>eps;
    if (f(a)*ddf(a)>0)
        x=a;
    else
        x=b;
    do{
        xp=x;
        x=x-(f(x)/df(x));
        i++;
    }
    while (abs(x-xp)<eps);
    cout<<x<<endl;
    cout<<i;
    return 0;
}
