#include<bits/stdc++.h>
using namespace std;

double c;
bool isPossible(double x)
{
    double sq=x*x,root=sqrtl(x);
    sq+=root;
    //cout<<sq<<endl;
    if(sq>=c) return true;
    return false;
}
int main()
{
    double x,l=0,r=1e10,mid;
    cin>>x;
    c=x;
    mid=(l+r)/2.0;
    while((r-l)>0.000001)
    {
        if(isPossible(mid))
            r=mid;
        else l=mid;
        mid=(l+r)/2.0;
        //cout<<l <<' '<<r<<endl;
    }
    cout<<fixed<<setprecision(6)<<r<<endl;
}
