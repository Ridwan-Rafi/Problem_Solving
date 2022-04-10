#include<iostream>
#include<cmath>
using namespace std;

double logn(double x,int base)
{
    return log(x)/log(base);
}
int dgt(long long int N,int base)
{
    double d;

    d=(N*logn(N/M_E,base))+(logn(2*M_PI*N,base)/2.0);
    return floor(d)+1;
}
int main()
{
    int t,b;
    long long int s;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s>>b;
        if(s<2)
            cout<<"Case "<<i<<": "<<1<<endl;
        else if(s==2 && b==2)
            cout<<"Case "<<i<<": "<<2<<endl;
        else
        cout<<"Case "<<i<<": "<<dgt(s,b)<<endl;
    }
}
