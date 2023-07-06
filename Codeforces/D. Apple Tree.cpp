#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = (2e5)+4;
vector<int>nd[N];
bool visited[N];
int num[N];
void clr(int n)
{
    for(int i=0; i<=n; i++)
    {
        nd[i].clear();
        visited[i]=0;
        num[i]=0;
    }

}

int dfs(int nod)
{
    visited[nod]=1;
    //cout<<nod<<endl;
    int vs=nd[nod][0];
    if(nd[nod].size()==1 && visited[vs]==1)
    {
        num[nod]=1;
        return 1;
    }

    int leaf,tot=0;
    for(int i : nd[nod])
    {
        if(visited[i]==0)
        {
            leaf=dfs(i);
            tot+=leaf;
        }
    }
    num[nod]=tot;
    return tot;
}
void solve()
{
    int n,u,v,q;
    cin>>n;
    clr(n);

    for(int i=0; i<n-1; i++)
    {
        cin>>u>>v;
        nd[u].push_back(v);
        nd[v].push_back(u);
    }

    u=dfs(1);

    //for(int i=1;i<=n;i++)cout<<num[i]<<' ';
    //cout<<endl;

    cin>>q;
    ll l,r;
    for(int i=0;i<q;i++)
    {
        cin>>u>>v;
        l=num[u];
        r=num[v];
        cout<<l*r<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
}

