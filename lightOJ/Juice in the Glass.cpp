#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
    int t;
    double r1,r2,h,p,r3,vol;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r1>>r2>>h>>p;
        r3=((r1*2.0)-(r2*2.0))/h;
        r3=(h-p)*r3;
        r3=((r1*2.0)-r3)/2.0;
       // cout<<r3<<endl;
        vol=PI*(p/3.0)*((r2*r2)+(r2*r3)+(r3*r3));
        printf("Case %d: %.9f\n",i,vol);
    }
}
