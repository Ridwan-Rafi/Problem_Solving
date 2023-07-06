#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    char c;
    int n,nm;
    cin>>n>>nm;
    int ar[n+4];
    for(int i=0;i<n;i++){
            cin>>c;
            ar[i]=c-'0';
    }
    bool done=0;
    for(int i=0;i<n;i++)
    {
        if(nm>ar[i] && done==0)
        {
            cout<<nm;
            done=1;
        }
        cout<<ar[i];
    }
    if(done==0)cout<<nm;
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

