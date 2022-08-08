#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[200],nn,mn,f;
    cin>>t;
    while(t--)
    {
        f=0;
        mn=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n-1;i++)
        {
            nn=ar[i]-ar[i+1];
            mn=min(mn,nn);
            if(nn!=mn)
            {

                if(nn>mn && nn%mn!=0)
                    f=1;
                else if(mn>nn && mn%nn!=0)f=1;
            }

        }
        if(f==0)cout<<"YES\n";
        else cout<<"NO\n";
        //sort(ar,ar+n)
    }
}
