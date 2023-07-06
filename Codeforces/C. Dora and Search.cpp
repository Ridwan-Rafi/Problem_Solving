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
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }

        int l=1,r=n,mn=1,mx=n;
        bool f=0,ff=0;
        while(l<r)
        {
            f=0,ff=0;
            if(ar[l]==mn){
                    if(l+1>=r)break;
                    l++;
                    mn++;
            }
            else if(ar[l]==mx){
                if(l+1>=r)break;
                l++;
                mx--;
            }
            else f=1;

            if(ar[r]==mn){
                    if(l+1>=r)break;
                    r--;
                    mn++;
            }
            else if(ar[r]==mx){
                if(l+1>=r)break;
                r--;
                mx--;
            }
            else ff=1;

            if(ff==1 && f==1)break;
        }

        if(l+1==r || l==r)cout<<-1<<endl;
        else cout<<l<<' '<<r<<endl;
    }
}
