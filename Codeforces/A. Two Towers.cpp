#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    string a,b;;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>a>>b;
        int f=0,ff=0;
        for(int i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
            {
                f++;

            }
        }

        for(int i=1; i<m; i++)
        {
            if(b[i]==b[i-1])
            {
                ff++;
            }
        }
bool flag=0;
        if(f>=1 && ff>=1)cout<<"NO\n";
        else if(f==0 && ff==0)cout<<"YES\n";
        else if(f>=1)
        {
            if(f>1)cout<<"NO\n";
            else
            {
                if(a[n-1]==b[m-1])cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
        else if(ff>=1)
        {
            if(ff>1)cout<<"NO\n";
            else
            {
                if(a[n-1]==b[m-1])cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
    }
}
