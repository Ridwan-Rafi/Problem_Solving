#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,m,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        c=n*m;
        if(n==1 || m==1)
            cout<<"Case "<<i<<": "<<c<<endl;
        else if(n==2 || m==2)
        {
            b=max(n,m);
            a=(b/4)*4;
            if(b%4==1)
                a+=2;
            else if(b%4>1)
                a+=4;
            cout<<"Case "<<i<<": "<<a<<endl;
        }
        else
        cout<<"Case "<<i<<": "<<ceil((c)/2.0)<<endl;
    }
}
