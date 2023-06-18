#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,k;
    cin>>n>>k;
    int ar[n+5],br[n+5],a[n+5];

    for(int i=0;i<n;i++){
    cin>>ar[i];
    a[i]=ar[i];
    }
     for(int i=0;i<n;i++){
    cin>>br[i];
    }

    sort(ar,ar+n);
    sort(br,br+n);
    map<int,vector<int>>mp;
     for(int i=0;i<n;i++){
            mp[ar[i]].push_back(br[i]);
    }
    int val;
    for(int i=0;i<n;i++)
    {
        val=*mp[a[i]].rbegin();
        cout<<val<<' ';
        mp[a[i]].pop_back();
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}
