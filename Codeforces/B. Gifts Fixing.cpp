#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    int a[n+4],b[n+4];
    int mn1,mn2;
    mn1=mn2=INT_MAX;
    for(int i=0;i<n;i++){
            cin>>a[i];
            mn1=min(mn1,a[i]);
    }
    for(int i=0;i<n;i++){
            cin>>b[i];
            mn2=min(mn2,b[i]);
    }

    ll cnt=0,dist;
    for(int i=0;i<n;i++)
    {
        dist=0;
        if(a[i]>mn1 && b[i]>mn2)dist=max(a[i]-mn1,b[i]-mn2);
        else if(a[i]>mn1)dist=a[i]-mn1;
        else if(b[i]>mn2)dist=b[i]-mn2;

        cnt+=dist;
    }

    cout<<cnt<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}
