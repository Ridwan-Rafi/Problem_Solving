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
    bool f=0;
    if(ar[0]%2==1)f=1;

    if(f==1)cout<<"YES\n";
    else{
        for(int i=0;i<n;i++)
        if(ar[i]%2==1){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

