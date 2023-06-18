#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPossible(ll time,ll x,ll y,ll req)
{
    ll copies=0;
    copies+=(time/x);
    copies+=(time/y);

    if(copies>=req)return true;
    return false;
}

int main()
{
    ll n,x,y,mx;
    cin>>n>>x>>y;

    mx=max(x,y);
    ll l=0,r=mx*n,init,mid;

    mid=(l+r)/2;
    while(l+1<r)
    {
        //cout<<l<<' '<<r<<endl;
        if(isPossible(mid,x,y,n-1))
            r=mid;
        else l=mid;
        mid=(l+r)/2;
    }

    if(isPossible(l,x,y,n-1))
    {
        cout<<l+min(x,y)<<endl;
    }
    else cout<<r+min(x,y)<<endl;
}
