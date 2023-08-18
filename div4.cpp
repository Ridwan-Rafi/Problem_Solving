#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve(){


   ll n,c;
        cin>>n>>c;

        ll area = 0;
        ll arr[n+6];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            area +=pow(arr[i],2);
        }


        c -=area;
        c /= 4*n;

        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[i];
        }
        sum/=2*n;

        ll x=sqrt(pow(sum,2)+c);
        x-=sum;

        cout<<x<<endl;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

