#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        b=c=0;
        int ar[a+3];

        for(int i=0;i<a;i++)cin>>ar[i];
        for(int i=0;i<a;i++)
        {
            if(ar[i]%2==0)b+=ar[i];
            else c+=ar[i];
        }

        if(b>c)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
