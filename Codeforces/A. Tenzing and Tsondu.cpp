#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,m;
    cin>>n>>m;
    ll val,sum1=0,sum2=0;

    for(int i=0;i<n;i++){
            cin>>val;
    sum1+=val;
    }
    for(int i=0;i<m;i++){
        cin>>val;sum2+=val;
    }

    if(sum1>sum2)
        cout<<"Tsondu\n";
    else if(sum2>sum1)cout<<"Tenzing\n";
    else cout<<"Draw\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}
