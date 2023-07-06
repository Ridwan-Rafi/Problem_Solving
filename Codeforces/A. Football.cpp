#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    string s;
    map<string,int>mp;
    while(n--)
    {
        cin>>s;
        mp[s]++;
    }
    n=0;
    for(auto [ss,cnt]:mp)
    {
        if(cnt>n){
            s=ss;
            n=cnt;
        }
    }
    cout<<s<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;while(t--)
    solve();
}

