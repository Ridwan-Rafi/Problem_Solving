#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a>b && a<c) cout<<"Case "<<i<<": "<<a<<endl;
        else if(a>c && a<b) cout<<"Case "<<i<<": "<<a<<endl;
        else if(b>a && b<c) cout<<"Case "<<i<<": "<<b<<endl;
        else if(b>c && b<a) cout<<"Case "<<i<<": "<<b<<endl;
        else  cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}
