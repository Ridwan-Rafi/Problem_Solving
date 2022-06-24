#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,ar[44][44],c,r,i,j;
    long long int mx,ans,cm;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        mx=-99999999999999;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>ar[i][j];
                if(mx<ar[i][j])
                {
                    mx=ar[i][j];
                    r=i;
                    c=j;
                }
            }
        }
        ans=r*c;
        cm=(abs(r-n)+1)*(abs(c-m)+1);
        ans=max(ans,cm);
        cm=r*(abs(c-m)+1);
        ans=max(ans,cm);
        cm=(abs(r-n)+1)*c;
        ans=max(ans,cm);
        cout<<ans<<endl;
    }
}
