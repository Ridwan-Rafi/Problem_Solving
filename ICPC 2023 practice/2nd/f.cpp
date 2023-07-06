#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll a,b,x;

int digit(ll N)
{
    int cnt=0;
    while(N!=0)
    {
        N/=10;
        cnt++;
    }
    return cnt;
}

bool isPossible(ll N)
{
    ll dgt=digit(N);
    ll need=(a*N)+(b*dgt);
    if(need>x)return false;
    else return true;
}

int main()
{
    cin>>a>>b>>x;

    ll l=0,r=(1e9)+1,mid;

    while(l+1<r)
    {
        mid=(l+r)/2;

        if(isPossible(mid))
            l=mid;
        else r=mid;
    }
    cout<<l<<endl;
}
