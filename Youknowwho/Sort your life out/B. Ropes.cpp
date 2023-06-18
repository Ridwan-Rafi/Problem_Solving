#include<bits/stdc++.h>
using namespace std;

int ln;
bool possible(long long int ar[],long long int tar,long long int k)
{
    long long int cnt=0,pice;

    for(int i=0; i<ln; i++)
    {
        pice=ar[i]/tar;
        cnt+=pice;
    }
    //cout<<cnt<<endl;
    if(cnt>=k)return true;
    return false;
}

bool vag(long long int ar[],double tar,int k)
{
    long long int cnt=0,pice;

    for(int i=0; i<ln; i++)
    {
        pice=(double)ar[i]/tar;
        cnt+=pice;
    }
    //cout<<cnt<<endl;
    if(cnt>=k)return true;
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    long long int ar[n+3],sum=0;
    ln=n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    long long int l=0,r=sum,mid;

    mid=(l+r)/2;

    while(l+1<r)
    {
        if(possible(ar,mid,k))
            l=mid;
        else r=mid;
        mid=(l+r)/2;
    }
    //cout<<l<<' '<<r<<endl;
    double lf=l,rf=r,midf;
    midf=(lf+rf)/2.0;
    while((rf-lf)>0.000001)
    {
        if(vag(ar,midf,k))
            lf=midf;
        else rf=midf;

        midf=(lf+rf)/2.0;
    }
    cout<<fixed<<setprecision(6)<<lf<<endl;
}
