#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int f,n,q;
    cin>>f>>n>>q;
    int u,v;
    set<int>mp[f+4];
    set<int> main;
    for(int i=0; i<n; i++)
    {
        cin>>u>>v;
        mp[u].insert(v);
        mp[v].insert(u);
        main.insert(u);
        main.insert(v);
    }
    set<int>l,r;
    int lb;
    for(int i=0; i<q; i++)
    {
        cin>>u>>v;
        if(u>v)swap(u,v);
        l=mp[u];
        r=mp[v];

        if(l.lower_bound(v)!=l.end())cout<<"Yes\n";
        else if(r.lower_bound(0)!=r.end())
        {
            lb=*r.lower_bound(0);
            if(lb>u)cout<<"No\n";
            else cout<<"Yes\n";
        }
        else cout<<"No\n";

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}

