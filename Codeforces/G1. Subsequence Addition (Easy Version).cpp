#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ar[n+5];

        for(int i=0;i<n;i++)cin>>ar[i];

        sort(ar,ar+n);
        long long int val,sum,ii;
        bool f=0,ff=0;
        if(ar[0]!=1)f=1;
        sum=ar[0];
        for(int i=1;i<n;i++)
        {
            if(ar[i]>sum){
                f=1;
                break;
            }
            sum+=ar[i];
        }

        if(f==1)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
