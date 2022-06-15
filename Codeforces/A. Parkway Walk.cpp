#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,tt;
    long long int sm;
    cin>>t;
    while(t--)
    {
        sm=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){cin>>tt;
        sm+=tt;
        }
        sm-=m;
        if(sm<0)sm=0;
        cout<<sm<<endl;

    }
}
