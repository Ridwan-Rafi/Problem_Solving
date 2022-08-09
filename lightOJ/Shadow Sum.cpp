#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,aa[20022];
    long long int sum,val,abv;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        sum=0;
        for(int i=0;i<20022;i++)aa[i]=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            abv=abs(val);
            if(aa[abv]==0)
            {
                if(val<0)aa[abv]=-1;
                else aa[abv]=1;
                sum+=val;
            }
            else if(aa[abv]==1)
            {
                if(val<0)
                {
                    aa[abv]=-1;
                    sum-=abv;
                    sum+=val;
                }
            }
            else if(aa[abv]==-1)
            {
                if(val>=0)
                {
                    aa[abv]=1;
                    sum+=abv;
                    sum+=val;
                }
            }
        }
        printf("Case %d: %lld\n",tt,sum);
    }
}
