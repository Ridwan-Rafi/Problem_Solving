#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,n,m,sum;
    bool flag;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        sum=(n/2)*m;
        printf("Case %d: %lld\n",i,sum);
    }
}
