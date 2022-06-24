#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[30],f=0,w=0,w1=0,ans=1000000001,tl=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        tl+=ar[i];
    }
    //sort(ar,ar+n);

    for(int i=0;i<n;i++)
    {
        w=ar[i];
        for(int j=0;j<n;j++)
        {
            w1=tl-w;
         f=abs(w1-w);
        ans=min(ans,f);
        if(j==i)continue;

            w+=ar[j];
        }
    }
    cout<<ans<<endl;
}
