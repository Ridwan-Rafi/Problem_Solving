#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=(2e5)+6;

vector<int>vc[N];
int mxDist=0;
bool visited[N];

int dfs(int nod)
{
    visited[nod]=1;
    if(vc[nod].size()==0)return 0;

    int mx=0,mx2=0,tot=0,dist;
    for(int i: vc[nod])
    {
        if(visited[i]==1)continue;
        dist=dfs(i)+1;
        if(mx<dist)
        {
            mx2=mx;
            mx=dist;
        }
        else if(mx2<dist)mx2=dist;
    }
    tot=mx2+mx;
    mxDist=max(mxDist,tot);
    //cout<<nod<<" -> "<<mx<<'\n';
    return mx;
}

void solve()
{
    int n,u,v;
    cin>>n;
    for(int i=0;i<=n;i++)visited[i]=0;

    for(int i=1;i<n;i++)
    {
        cin>>u>>v;
        vc[u].push_back(v);
        vc[v].push_back(u);
    }
    v=dfs(1);
    cout<<mxDist<<endl;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}

