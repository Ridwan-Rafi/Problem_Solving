#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int ar[n+4],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }

        sort(ar,ar+n);

        int l1=0,l2=1,r=n-1,mn;
        for(int i=0; i<k; i++)
        {
            mn=ar[l1]+ar[l2];
            if(i+1==k)
            {
                if(mn<ar[r])
                    sum-=mn;
                else sum-=ar[r];
            }
            else
            {
                if(mn+ar || mn+ar[r]<=ar[r]+ar[r-1])
                {
                    sum-=(mn);
                    l1=l2+1;
                    l2+=2;
                }
                else
                {
                    sum-=ar[r];
                    r--;
                }
                //cout<<l1<<' '<<l2<<' '<<r<<endl;
            }
        }

        cout<<sum<<endl;
    }
}
