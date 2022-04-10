#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[300001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        if(n==1 && ar[0]>1)
        {
            cout<<"NO\n";
        }
        else if(ar[n-1]-ar[n-2]>1)cout<<"NO\n";
        else cout<<"YES\n";

    }
}
