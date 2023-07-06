#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+5],val,mx=-1;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            mx=max(mx,ar[i]);
        }
        val=ar[0];

        for(int i=1;i<n;i++)val=val^ar[i];


        if((n&1)==0)
        {
            if(val==0)cout<<mx<<'\n';
            else cout<<-1<<'\n';
        }
        else cout<<val<<'\n';
    }
}
