#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

    ll x, n; cin >> x >> n;
    ll arr[n + 10],val;

    int cn[111];

    for(int i=0;i<111;i++)cn[i]=0;

    for(ll i = 0; i < n; i++){
      cin>>val;
      cn[val]=1;
    }

    int mn=INT_MAX,df,ans=0;
    for(int i=0;i<111;i++)
    {
        if(cn[i]==0)
        {
            df=abs(x-i);
            if(mn>df)
            {
                mn=df;
                ans=i;
            }
        }
    }

    cout << ans << endl;

return 0;
}
