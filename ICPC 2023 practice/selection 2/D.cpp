#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    int ar[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    priority_queue<int>pq;
    ll sum=0,d;
    for(int i=n-1;i>=0;i--)
    {
        d=ar[i];
        sum+=d;
        pq.insert(-d);

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

