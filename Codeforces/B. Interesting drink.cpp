#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    int vc[n+4];
    for(int i=0; i<n; i++)cin>>vc[i];

    sort(vc,vc+n);

    int q,val;
    cin>>q;
    while(q--)
    {
        cin>>val;
        cout<<upper_bound(vc,vc+n,val)-vc<<endl;
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

