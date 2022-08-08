#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[111][111],nn,cnt,mn;
    cin>>t;
    while(t--)
    {
        cnt=mn=0;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>ar[i][j];
            }
        }

        nn=ceil((float)n/2.0);
        for(int i=1; i<=nn; i++)
        {
            for(int j=i; j<=n-i;j++)
            {
                mn+=ar[j][j];
                mn+=ar[j][n];
                mn+=ar[n][n];
                mn+=ar[n][j];
            }
        }
    }
}
