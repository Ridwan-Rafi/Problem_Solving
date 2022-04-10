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

int d(long long int N)
{
    double d;

    d=(N*log10(N/M_E))+(log10(2*M_PI*N)/2.0);
    return floor(d)+1;
}
int main()
{
    long long int s=1;
    for(int i=1;i<20;i++)
    {
        s*=i;

        cout<<i<<"  dec="<<d(i)<<"   bin="<<dgt(i)<<"   "<<s<<endl;
    }
}
