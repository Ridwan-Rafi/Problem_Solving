#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
   long long int lm,wd;
    cin>>n>>m>>a;

    lm=ceil((double)n/a);
    wd=ceil((double)m/a);
    long long int ans=lm*wd;

    cout<<ans<<endl;
}
