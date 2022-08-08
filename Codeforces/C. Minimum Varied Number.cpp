#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[10000],dg[12],d,l;

    cin>>t;
    while(t--)
    {
        for(int i=0;i<11;i++)dg[i]=0;
        cin>>n;
        d=9;
        l=0;
        while(n>0)
        {
            if(dg[d]==1)d--;
            else if(n-d<0)d--;
            else{
                ar[l]=d;
                dg[d]=1;
                n=n-d;
                l++;
            }
        }
        for(int i=l-1;i>=0;i--)
        {
            cout<<ar[i];
        }
        cout<<endl;
    }
}
