#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100];
    int t,n,m,ar[500],mn,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>ar[i];
        for(int i=1;i<=m;i++)c[i]='B';
        for(int i=1;i<=n;i++)
        {
            l=ar[i];
            mn=m+1-ar[i];
            //printf("l= %d mn=%d\n",l,mn);
            if(l<=mn)
            {
                if(c[l]=='A')c[mn]='A';
                else
                c[l]='A';
            }
            else if(mn<l && mn>0)
            {
                if(c[mn]=='A')c[l]='A';
                else
                c[mn]='A';
                }
            else if(mn<1)c[l]='A';
        }
        for(int i=1;i<=m;i++)cout<<c[i];
        cout<<endl;
    }
}
