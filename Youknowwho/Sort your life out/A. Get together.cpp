#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int t;
    int p,v;
    pair<int,int> mn,mx;
    mx.first=INT_MIN;
    mn.first=INT_MAX;
    vector<pair<int,int>>pos;
    cin>>t;
    while(t--)
    {
        cin>>p>>v;
        pos.push_back({p,v});
        mn=min(mn,{p,v});
        mx=max(mx,{p,v});
    }

    int dis=mx.first-mn.first;
    double mid,zabe,midPos;
    mid=(double)mx.second/mx.second+mn.second;
    zabe=(double)dis*mid;

    midPos=mn.first+zabe;

    cout<<midPos<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}

