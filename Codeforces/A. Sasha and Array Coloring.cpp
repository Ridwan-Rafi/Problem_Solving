#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    int ar[n+4];
    for(int i=0;i<n;i++)cin>>ar[i];

    sort(ar,ar+n);
    ll sum=0;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        sum+=(ar[j]-ar[i]);
    }
    cout<<sum<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

