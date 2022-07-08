#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);

    int t,n,s,l,r,a[30000];
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        l=-1;r=-1;
        cin>>n;
        long long int ar[n+3],mx=-11111111111,sm;
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
            ar[i]=a[i];
        }


        for(int i=1;i<n-1;i++){
                ar[i]+=ar[i-1];
                if(mx<=ar[i-1])
                {
                    mx=ar[i-1];
                    r=i-1;
                }
        }
        cout<<"29"<<ar[n-2]<<endl;
        if(mx<=ar[n-2])
                {
                    mx=ar[n-2];
                    r=n-2;
                }


        sm=0;
        l=0;
        for(int i=0;i<=r;i++)
        {
            sm+=a[i];
                if(sm<0)
                {
                    sm=0;
                    l=i+1;
                }
        }

        if(mx<=0)
        printf("Route %d has no nice parts\n",tt);
        else
            printf("The nicest part of route %d is between stops %d and %d\n",tt,l,r);
    }
    return 0;
}
