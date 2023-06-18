#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=-1;
    cin>>n;
    int ar[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mx=max(ar[i],mx);
    }

    while(mx!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(ar[i]>=mx)cout<<'*';
            else cout<<' ';
        }
        cout<<'\n';
        mx--;
    }

}
