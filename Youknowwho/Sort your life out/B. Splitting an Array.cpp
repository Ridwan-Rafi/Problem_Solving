#include<bits/stdc++.h>
using namespace std;
#define ll long long int


bool isPossible(int ar[],int n,int k,ll limit)
{
    ll sum;
    for(int i=0;i<n;i++)
    {
        if(k<=0)return false;
        sum+=ar[i];
        if(sum>limit)
        {
            sum=ar[i];
            k--;
        }
    }
    return true;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    int ar[n+4];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);

    ll l=0,r=1e16,mid;
    while(l+1<r)
    {
        mid=(l+r)/2;
        if(isPossible(ar,n,k,mid))
            r=mid;
        else l=mid;
    }
    cout<<r<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}
