#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,q;
    cin>>n>>q;
    long long int ar[n+2],m;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=1;i<n;i++)ar[i]+=ar[i-1];

    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        if(a==1)
            m=ar[b-1];
        else
        m=abs(ar[b-1]-ar[a-2]);
        cout<<m<<endl;
    }
}
