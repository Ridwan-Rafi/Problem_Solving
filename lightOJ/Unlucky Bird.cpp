#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double v1,v2,v3,a1,a2,dt1,dt2,db,dt,tt1,tt2,tt;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

    cin>>v1>>v2>>v3>>a1>>a2;

    tt1=v1/a1;
    tt2=v2/a2;
   // cout<<tt1<<" "<<tt2<<endl;
    dt=(0.5*a1*tt1*tt1)+(0.5*a2*tt2*tt2);
    tt=max(tt1,tt2);
     db=tt*v3;
    printf("Case %d: %.10lf %.10lf\n",i,dt,db);

    }
}
