#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,x;
    cin>>n>>x;
    int a[n+4],b[n+4],c[n+4];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];

    int fst=-1,scnd=-1,trd=-1;
    for(int i=0;i<n;i++)
    {
        if((x&a[i])==a[i])
            fst=i;
        else break;
    }
    for(int i=0;i<n;i++)
    {
        if((x&b[i])==b[i])
            scnd=i;
        else break;
    }
    for(int i=0;i<n;i++)
    {
        if((x&c[i])==c[i])
            trd=i;
        else break;
    }
    //cout<<fst<<' '<<scnd<<' '<<trd<<endl;
    int ans=0;
    for(int i=fst;i>=0;i--)ans=ans|a[i];
    for(int i=scnd;i>=0;i--)ans=ans|b[i];
    for(int i=trd;i>=0;i--)ans=ans|c[i];

    if(x==ans)cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}
