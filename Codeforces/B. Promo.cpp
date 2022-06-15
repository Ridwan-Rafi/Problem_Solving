
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q,x,y,l,r;
    long long int ar[200011],sm;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);

    for(int i=n-2;i>=0;i--)
    {
        ar[i]=ar[i]+ar[i+1];
    }
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(x-y==0)
        {
            l=n-x;
            sm=ar[l];
        }
        else{
        l=n-x;
        r=n-(x-y);
        sm=ar[l]-ar[r];
        }
        cout<<sm<<endl;
    }
}
