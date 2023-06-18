#include<bits/stdc++.h>
using namespace std;
#define ll long long int

set<int> ed[200011];
bool visited[200011];
void clr(int n)
{
    for(int i=0; i<=n; i++)
    {
        ed[i].clear();
        visited[i]=0;
    }

}

int cnt=0,mxd=-1;
bool dbl=1;
void dfs(int ind,int depth)
{
    visited[ind]=1;
    mxd=max(mxd,depth);
    if(ed[ind].size()==1)
        dbl=0;
    for(int i:ed[ind])
    {
        if(visited[i]==0)
        {
            dfs(i,depth+1);
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    clr(n);
    int ar[n+5];
    for(int i=1; i<=n; i++)cin>>ar[i];

    for(int i=1; i<=n; i++)
    {
        ed[i].insert(ar[i]);
        ed[ar[i]].insert(i);

    }

    int comp=0,mn=1,dobl=0,sngl=0;
    for(int i=1; i<=n; i++)
    {
        if(visited[i]==0)
        {
            dbl=1;
            dfs(i,1);
            comp++;
            if(dbl==1)dobl++;
            else sngl++;
        }
    }


    cout<<(sngl>0 ? dobl+1:dobl)<<' '<<comp<<endl;
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

