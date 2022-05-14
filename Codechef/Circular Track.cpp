#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,m,mn,nn;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>m;
        mn=abs(a-b);
        nn=m-mn;
        cout<<min(mn,nn)<<endl;
    }
    return 0;
}
