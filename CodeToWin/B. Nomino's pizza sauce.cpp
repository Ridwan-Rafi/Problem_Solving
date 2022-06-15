#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{

    // input;
    //output;
    //fast;
    //cin.tie(0);
    int t;
    double d,n,w,ar,r,sl,as;
    cin>>t;
    while(t--)
    {
        cin>>d>>n>>w;
        r=d/2.0;
        ar=PI*r*r;
        sl=ar/n;
        sl=ar-sl;
        as=w*sl;
        printf("%.6lf\n",as);
    }
}
