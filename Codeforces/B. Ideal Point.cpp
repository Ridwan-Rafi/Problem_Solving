#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,l,r;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ar[55];
        for(int i=0; i<55; i++)ar[i]=0;
        for(int i=0; i<n; i++)
        {
            cin>>l>>r;
            if(k>=l && k<=r)
            {
                ar[l]++;
                ar[r+1]--;
            }
        }
        int mx=-1,ind,cnt=0;
        for(int i=1; i<55; i++)
        {
            ar[i]=ar[i]+ar[i-1];
        }

        for(int i=1; i<55; i++)
        {
            if(mx<ar[i])
            {
                mx=ar[i];
                ind=i;
            }
            else if(mx==ar[i] && mx!=0)cnt++;
        }

        if(ar[k]==mx && cnt==0 && mx!=0)cout<<"YES\n";
        else cout<<"NO\n";

    }
}
