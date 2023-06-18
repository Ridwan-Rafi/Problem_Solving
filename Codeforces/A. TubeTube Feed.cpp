#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int ar[n+4],br[n+4];
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n;i++)cin>>br[i];

        int indx,mx=-1,mxr=-1;
        for(int i=0;i<n;i++)
        {
            if(mxr<br[i] && q>=ar[i])
            {
                mxr=br[i];
                mx=i+1;
            }
            q--;
        }
        cout<<mx<<endl;
    }
}
