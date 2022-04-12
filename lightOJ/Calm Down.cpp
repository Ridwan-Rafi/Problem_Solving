#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    int t,b;
    double R,r,v,as,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>R>>n;
        v=180.0/n;
        v=(v*PI)/180.0;
        //cout<<v<<endl;
        as=sin(v);
        //cout<<v<<endl;
        r=(R*as)/(as+1);
        //cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<r<<endl;
        b=r;
        if(r-b==0)
        printf("Case %d:  %d\n",i,b);
        else
             printf("Case %d:  %.10lf\n",i,r);
    }
}
