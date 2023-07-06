#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = (2e5)+5;

vector<int>vc[N];
int cont[N];

int dfs(int nod)
{
    if(vc[nod].size()==0)return 0;

    int cnt,tot=0;
    for(int i : vc[nod])
    {
        cnt=dfs(i);
        //cont[i]=cnt;
        tot+=(cnt+1);
    }
    cont[nod]=tot;
    return tot;
}

void solve()
{
    int n,val;
    cin>>n;
    for(int i=0;i<=n;i++)cont[i]=0;
    for(int i=2; i<=n; i++)
    {
        cin>>val;
        vc[val].push_back(i);
    }

    val=dfs(1);

    for(int i=1;i<=n;i++)
        cout<<cont[i]<<' ';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}

