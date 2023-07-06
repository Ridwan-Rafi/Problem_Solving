#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    ll ar[n+4];
    for(int i=0;i<n;i++)cin>>ar[i];

    ll sum=0;
    int cnt=0;
    bool f=0;
    for(int i=0;i<n;i++)
    {
        sum+=abs(ar[i]);

        if(ar[i]<0)
        {
            f=1;
        }
        else if(ar[i]==0)continue;
        else{
            if(f==1){
                cnt++;
                f=0;
            }
        }
    }
    if(f==1)cnt++;
    cout<<sum<<' '<<cnt<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

