#include<bits/stdc++.h>
using namespace std;

 int isPossible(int ar[],int ln,int k)
{
    int grp;
    int arr[ln+2],lok,grop=0;
    for(int i=0; i<ln; i++)arr[i]=ar[i];
    bool pos=false;
    while(1)
    {
        lok=k;
        sort(arr,arr+ln,greater<int>());



        if(lok<=0)grop++;
        else break;
    }

    return grop;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,n;
    cin>>k>>n;
    int ar[n+5];

    for(int i=0; i<n; i++)
        cin>>ar[i];
cout<<isPossible(ar,n,k);
//    int l=0,r=INT_MAX,mid;
//
//    while(l+1<r)
//    {
//        mid=(l+r)/2;
//
//        if(isPossible(ar,n,mid,k))
//            l=mid;
//        else
//            r=mid;
//    }
    //cout<<l<<endl;
}
