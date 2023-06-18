#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    int a,b,c;
    cin>>n;
    x=y=z=0;
    while(n--)
    {
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }

    if(x==0 && z==0 && y==0)cout<<"YES\n";
    else cout<<"NO\n";
}
