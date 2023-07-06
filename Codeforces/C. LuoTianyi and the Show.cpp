#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ar[n+11],fl[m+4];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<m;i++)
            fl[i]=0;

        sort(ar,ar+n);

        int l=0,r=m-1;

        for(int i=0;i<n;i++)
        {
            if(ar[i]==-2)
            {
                if(l<m-1)
                {
                    fl[l]=1;
                    l++;
                }
            }
            else if(ar[i]==-1)
            {
                if(r>=0)
                {
                    fl[r]=1;
                    r--;
                }
            }
            else fl[ar[i]-1]=1;
        }

        int cnt=0;

        for(int i=0;i<m;i++)
            if(fl[i]==1)cnt++;
        cout<<cnt<<endl;
    }
}
