#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,t;
    cin>>n>>t;
    int ar[n+4],br[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];

    int mx=-1,ind=-1;

    for(int i=0;i<n;i++)
    {
        if(ar[i]<=t)
        {
            if(mx<br[i])
            {
                mx=br[i];
                ind=i+1;
            }
        }
        t--;
    }
    cout<<ind<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

