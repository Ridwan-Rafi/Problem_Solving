#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+4];
        for(int i=0;i<n;i++)cin>>ar[i];

        if(ar[0]==1)ar[0]++;

        for(int i=0;i<n-1;i++)
        {
            if(ar[i+1]==1)ar[i+1]++;

            if(ar[i+1]%ar[i]==0)
            {
                ar[i+1]++;
            }
        }
        for(int i=0;i<n;i++)cout<<ar[i]<<' ';
        cout<<'\n';
    }
}
