#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,sum,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ans=0;
        int ar[n+5][m+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
              sum=0;
                for(int l=0;l<m;l++)
                {
                    sum+=abs(ar[i][l]-ar[j][l]);
                }
                //cout<<sum<<' ';
                ans+=sum;
            }
            //cout<<'\n';
        }
        cout<<ans<<endl;
    }
}
