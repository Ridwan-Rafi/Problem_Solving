#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[50055],aa[50055],f,mn,mx,mnc,z,zm;
    cin>>t;
    while(t--)
    {
        f=z=0;
        mn=1000000001;
        mx=zm=-1;
        cin>>n;
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>aa[i];

        for(int i=0; i<n; i++)
        {
            if(aa[i]==0){
              zm=max(zm,a[i]);
                    continue;
            }

            if(a[i]<aa[i])
            {
                f=1;
                break;
            }
            else
            {
                mx=max(mx,a[i]-aa[i]);
                mn=min(mn,a[i]-aa[i]);
                if(mx!=mn){f=1;break;}
            }
        }
        if(f==1)cout<<"NO\n";
        else{
            if(zm>mn)cout<<"NO\n";
            else
            cout<<"YES\n";
        }


    }
}
