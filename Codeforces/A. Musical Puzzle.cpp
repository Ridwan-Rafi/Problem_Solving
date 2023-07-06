#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    map<string,int>mp;
    string ss;
    for(int i=1;i<n;i++)
    {
        ss=s[i-1];
        ss+=s[i];
        mp[ss]++;
    }

    cout<<mp.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

