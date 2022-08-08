#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[4],cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
    cin>>n;

    for(int i=1;i<=3;i++)
    {

        cin>>ar[i];

    }
    while(cnt!=3)
    {
       // cout<<cnt<<' '<<ar[n]<<endl;
        if(ar[n]>0)
        {
            cnt++;
            n=ar[n];
        }
        else break;
    }
    if(cnt>=2)cout<<"YES\n";
    else cout<<"NO\n";

    }

}
