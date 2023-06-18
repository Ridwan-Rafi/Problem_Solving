#include<bits/stdc++.h>
using namespace std;

void print(int l, int r)
{
    int rn=r-l+1;

    cout<<"? "<<rn;
    for(int i=l;i<=r;i++)cout<<' '<<i;
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  t,n,l,r,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ar[n+5],sum,wt;
        ar[0]=0;
        for(int i=1;i<=n;i++)cin>>ar[i];

        for(int i=1;i<=n;i++)ar[i]+=ar[i-1];

        l=1;
        r=n;

        while(l<r)
        {
            mid=(l+r)/2;
            print(l,mid);
            cin>>wt;
            sum=ar[mid]-ar[l-1];

            if(sum==wt)
            {
                l=mid+1;
            }
            else{
                r=mid;
            }
        }

        cout<<"! "<<l<<endl;
    }
}
