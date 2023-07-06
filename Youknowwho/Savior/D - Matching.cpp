
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    int n;
    cin>>s;
    n=s.size();
    if(s[0]=='0'){
        cout<<0<<'\n';
        return;
    }
    int m=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?' && i==0)
            m=9;
        else if(s[i]=='?')
        {
            m*=10;
        }
    }
    cout<<m<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}
