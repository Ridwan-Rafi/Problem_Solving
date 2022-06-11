#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1111],aa[1111];
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            aa[i]=a[i];
        }
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(aa,aa+n);
        for(int i=0; i<n; i++)
        {
            if(aa[i]==a[i] && i+1<n)
            {
                swap(aa[i],aa[i+1]);
            }
            else if(aa[i]==a[i] && i+1==n)
            {
                swap(aa[i],aa[i-1]);
            }
        }

        for(int i=0; i<n; i++)
            cout<<aa[i]<<' ';
        cout<<endl;
    }
}
