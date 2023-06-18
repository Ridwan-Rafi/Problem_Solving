#include<bits/stdc++.h>
using namespace std;

void fn(int ar[],int n)
{
    int br[n+4];
    br[0]=ar[0]%n;
    for(int i=1;i<n;i++){
            ar[i]+=ar[i-1];
            br[i]=ar[i]%n;
    }
    for(int i=0;i<n;i++)cout<<br[i]<<' ';
    cout<<endl;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+5];
        for(int i=0;i<n;i++)cin>>ar[i];
        fn(ar,n);
    }
}
