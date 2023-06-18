#include<bits/stdc++.h>
using namespace std;

int bsl(int ar[],int s,int val)
{
    int l=0,r=s,mid;


    mid=(l+r)/2;
    while(l<=r)
    {
        if(ar[mid]<val)
            l=mid+1;
        else
            r=mid-1;

        mid=(l+r)/2;
    }
    return l;
}

int bsr(int ar[],int s,int val)
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
    int n;
    cin>>n;
    int ar[n+4];
    for(int i=0;i<n;i++)cin>>ar[i];

    sort(ar,ar+n);

    int k,l,r;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>l>>r;
        l=bsl(ar,n-1,l);
        r=bsr(ar,n-1,r);
        cout<<abs(l-r)<<' ';
    }
}
