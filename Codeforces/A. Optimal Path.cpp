#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int rsum,csum,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        rsum=(m*(m+1))/2;
    csum=(((2*m)+((n-1)*m))*n)/2;
    csum-=m;
    //cout<<rsum<<" " <<csum<<endl;
    cout<<rsum+csum<<endl;
    }
}
