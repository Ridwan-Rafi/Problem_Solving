#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,cat,dog,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        if(a-x<0)
        {
            x=x-a;
        }
        else x=0;

        if(b-y<0)y=y-b;
        else y=0;

        if(x+y>c)cout<<"NO\n";
        else cout<<"YES\n";
    }
}
