#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n, ar[100111],m,s,d;
    long long int r[100111],l[100111];

        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        r[0]=0;
        for(int i=1;i<n;i++)
        {
            if(ar[i-1]>ar[i])
            r[i]=r[i-1]+(ar[i-1]-ar[i]);
            else if(ar[i-1]<=ar[i])
                r[i]=r[i-1];
        }
        l[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            if(ar[i]>=ar[i+1])
                l[i]=l[i+1];
            else if(ar[i]<ar[i+1])
                l[i]=l[i+1]+(ar[i+1]-ar[i]);
        }

        //for(int i=0;i<n;i++)cout<<r[i]<<' ';
        //cout<<endl;
        //for(int i=0;i<n;i++)cout<<l[i]<<' ';
        //cout<<endl;

        for(int i=0;i<m;i++)
        {
            cin>>s>>d;
            if(d>s)
            {
                cout<<abs(r[d-1]-r[s-1])<<endl;
            }
            else
                cout<<abs(l[d-1]-l[s-1])<<endl;
        }
}
