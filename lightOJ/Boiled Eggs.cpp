#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,ar[123],c,w;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        c=w=0;
        cin>>n>>p>>q;
        for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar,ar+n);
        int i=0;
        while(c<=p && w<=q && i<n)
        {
            w+=ar[i];
            c++;
            i++;
        }
        if(w>q || c>p)c--;

        printf("Case %d: %d\n",tt,c);
    }
}
