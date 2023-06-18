
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ar[n+4],a,b;
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);

        a=ar[0]*ar[1];
        b=ar[n-1]*ar[n-2];
        cout<<max(a,b)<<endl;
    }
}
