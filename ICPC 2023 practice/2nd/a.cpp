#include<bits/stdc++.h>
using namespace std;

#define PI 2*acos(0)

int main()
{

    double a,b,d,ac,as,bc,bs,x,y;
    cin>>a>>b>>d;

    d=d*(PI/180.0);
    ac=a*cos(d);
    as=a*sin(d);
    bc=b*cos(d);
    bs=b*sin(d);

    x=ac-bs;
    y=as+bc;

    cout<<fixed<<setprecision(6)<<x<<' '<<y<<endl;
}
