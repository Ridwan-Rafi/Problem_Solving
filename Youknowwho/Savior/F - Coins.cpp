#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,k,l,ind;
    cin>>n>>k;
bool fnd=0;
    if((n&1)==0)cout<<"YES\n";
    else{
        l=1,ind=1;
        while((l&1)==1)
        {
            l=n-(k*ind);
            ind++;
            if(k*ind>n)break;
        }
        if((l&1)==0)fnd=1;

        fnd ? cout<<"YES\n" :cout<<"NO\n";
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

