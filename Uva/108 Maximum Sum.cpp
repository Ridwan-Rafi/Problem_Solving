#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int n,r,c;
    long long int mx=-10000000000000,sa=-1111111111111,sum=-111111111111,ar[111][111];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
            sa=max(sa,ar[i][j]);
        }
    }

    for(int i=1;i<n;i++)
    {
        ar[0][i]+=ar[0][i-1];
        if(ar[0][i]>=mx)
            {
                mx=ar[0][i];
                r=0;
                c=i;
            }
    }
    for(int i=1;i<n;i++)
    {
        ar[i][0]+=ar[i-1][0];
        if(ar[i][0]>=mx)
            {
                mx=ar[i][0];
                r=i;
                c=0;
            }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            ar[i][j]+=((ar[i-1][j]+ar[i][j-1])-ar[i-1][j-1]);
            if(ar[i][j]>=mx)
            {
                mx=ar[i][j];
                r=i;
                c=j;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ar[i][j]<<' ';
        }
        cout<<endl;
    }

    for(int i=r;i>=0;i--)
    {
        for(int j=c;j>=0;j--)
        {
            if(ar[i][j]<=0)
            {
                sum=ar[r][c]-ar[i][j];
                break;
            }
        }
    }
    cout<<max(mx,max(sum,sa))<<endl;

    return 0;
}
