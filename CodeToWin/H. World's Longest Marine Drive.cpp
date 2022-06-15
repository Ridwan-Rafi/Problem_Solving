#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t,n,tk,dk,l,ans,eac;
    cin>>t;
    while(t--)
    {
        cin>>n>>tk;

        tk=tk-(50*n);

        eac=tk/n;
        if(eac<200)cout<<0<<endl;
        else{
            dk=eac/200;
            l=dk*200;
ans=dk*50;

            cout<<ans<<endl;
        }

    }
}
