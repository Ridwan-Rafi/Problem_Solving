#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[200111],z,f;
    long long int tl;
    cin>>t;
    while(t--)
    {
        cin>>n;
        tl=z=f=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n-1;i++)
        {
            tl+=ar[i];
            if(ar[i]>0)f=1;
            if(f==1 && ar[i]==0)
                z++;
        }

        tl=tl+z;
        cout<<tl<<endl;
    }
}
