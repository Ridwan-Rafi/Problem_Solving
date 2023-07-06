#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n,ln;
    string ss,pres,ini;
    cin>>n>>ss;
    ini=pres=ss;
    do
    {
        //cout<<pres<<"  "<<ss<<'\n';
        if(pres<ss)
            break;
        pres=ss;

    }while(next_permutation(ss.begin(),ss.end()));

    if(ss>ini)
    cout<<n<<' '<<ss<<'\n';
    else cout<<n<<" BIGGEST\n";
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

