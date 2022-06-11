#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s[200022],f[200022];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)cin>>s[i];
        for(int i=0;i<n;i++)cin>>f[i];

        for(int i=0;i<n;i++)
        {
            if(i+1<n && f[i]>s[i+1])
            {
                s[i+1]=f[i];
            }
            cout<<f[i]-s[i]<<' ';
        }
        cout<<endl;
    }
}
