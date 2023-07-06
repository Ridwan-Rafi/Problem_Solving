#include<bits/stdc++.h>
using namespace std;

int mad(int x)
{
    int mx=-1,mn=111,val;

    while(x!=0)
    {
        val=x%10;
        mn=min(mn,val);
        mx=max(mx,val);
        x/=10;
    }
    return mx-mn;
}

int main()
{
    int t,n,l,r;
    cin>>t;
while(t--)
{
    int cnt=101,mx=-1,val,ans;
    cin>>l>>r;
    for(int i=r;i>=l && cnt>=0;i--,cnt--)
    {

        val=mad(i);
        if(val>mx)
        {
            mx=val;
            ans=i;
        }
    }
    cout<<ans<<'\n';
}
}
