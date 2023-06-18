#include<bits/stdc++.h>
using namespace std;

int bs(int ar[],int s,int val)
{
    int l=0,r=s,mid;


    mid=(l+r)/2;
    while(l<=r)
    {
        if(ar[mid]<=val)
            l=mid+1;
        else
            r=mid-1;

        mid=(l+r)/2;
    }
    return l;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n+4];
    for(int i=0;i<n;i++)cin>>ar[i];

    int val,ind;
    for(int i=0;i<m;i++)
    {
        cin>>val;

        ind=bs(ar,n-1,val);
        cout<<ind<<endl;
    }
}
