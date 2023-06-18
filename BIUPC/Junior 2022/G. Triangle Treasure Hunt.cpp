#include<bits/stdc++.h>
using namespace std;

struct point
{
    long long int x,y;
} p1,p2,p3,p;

double area(point p11,point p22, point p33)
{
    double areaa;

    areaa= (p11.x*p22.y) + (p22.x*p33.y) + (p33.x*p11.y) - (p22.x*p11.y) - (p33.x*p22.y) - (p11.x*p33.y);
    areaa= abs(areaa) * 0.5;
    return areaa;
}

int check(point p11,point p22, point p33, point pp)
{
    double ar1,ar2,ar3,total,mar;

    mar=area(p11,p22,p33);

    ar1=area(p,p22,p33);
    ar2 = area(p11,p,p33);
    ar3 = area(p11,p22,p);

    total = ar1+ar2+ar3;
    //cout<<mar<<' '<<total<<endl;
    if(mar == total)
    {
        if(ar1==0 || ar2==0 || ar3==0)return 1;
        else return 2;
    }

    return 0;
}

int main()
{
    int t,ans;
    cin>>t;

    while(t--)
    {
        cin>>p1.x>>p1.y;
        cin>>p2.x>>p2.y;
        cin>>p3.x>>p3.y;
        cin>>p.x>>p.y;

        ans=check(p1,p2,p3,p);
        if(ans==2)cout<<"Door Unlocked\n";
        else if(ans==1)cout<<"Try Again…\n";
        else cout<<"GET OUT !!\n";

    }
}
