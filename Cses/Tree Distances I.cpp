#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=(2e5)+6;

vector<int>vc[N];
int depth[N],sdepth[N];

void dfs(int nod,int par=-1)
{
    for(int child : vc[nod])
    {
        if(child==par)continue;
        depth[child]=depth[nod]+1;
        dfs(child,nod);
    }
}

void dfs1(int nod,int par=-1)
{
    for(int child : vc[nod])
    {
        if(child==par)continue;
        sdepth[child]=sdepth[nod]+1;
        dfs1(child,nod);
    }
}

void solve()
{
    int n,u,v;
    cin>>n;

    for(int i=1; i<n; i++)
    {
        cin>>u>>v;
        vc[u].push_back(v);
        vc[v].push_back(u);
    }
    depth[1]=0;
    dfs(1);

    int mxDepth=0,mxNode;
    for(int i=1; i<=n; i++)
    {
        if(mxDepth<depth[i])
        {
            mxDepth=depth[i];
            mxNode = i;
        }
        depth[i]=0;
    }
    //cout<<mxDepth<<' '<<mxNode<<endl;

    dfs(mxNode);
    mxDepth=0;
    for(int i=1; i<=n; i++)
    {
        if(mxDepth<depth[i])
        {
            mxDepth=depth[i];
            mxNode = i;
        }
    }

    sdepth[mxNode]=0;
    dfs1(mxNode);
    for(int i=1; i<=n; i++)
    {
        cout<<max(sdepth[i],depth[i])<<' ';
    }
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}


