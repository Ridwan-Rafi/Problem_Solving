#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a1,a2,a3,a4,a5,a6,ans,ans1,ans2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a1=n*567;
        a2=a1/9;
        a3=a2+7492;
        a4=a3*235;
        a5=a4/47;
        ans1=a5-498;
        ans2=ans1/10;
        ans=ans2%10;
        if(ans<0)
            cout<<-(ans)<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
