#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[3000],z,mx;
    cin>>t;
    while(t--)
    {
        mx=-12;
        cin>>n>>z;
        for(int  i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            mx=max(mx,ar[i]|z);
        }
        cout<<mx<<endl;

    }
}
