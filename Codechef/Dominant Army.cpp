#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b+c)cout<<"YES\n";
        else if(c>b+a)cout<<"YES\n";
        else if(b>a+c)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
