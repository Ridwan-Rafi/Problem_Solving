#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[200111],f;
    long long int x;
    map<long long int,int>m;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n;
        for(int i=0;i<n;i++)
            {
                cin>>ar[i];
                m[ar[i]]=1;
            }

        sort(ar,ar+n);

        for(int i=0;i<n-2;i++)
        {
            x=ar[i]+ar[i+1]+ar[i+2];
            if(m[x]==0){
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
}
