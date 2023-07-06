#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int a,b,c,dif;
    cin>>a>>b>>c;
    bool f=0;
    if(a-b == b-c)f=1;
    else
    {

        if(((a+c)&1)==0)
        {
            dif=(a+c)/2;
            if(dif%b==0)f=1;
        }

        if((((b-a)+b)!=0 && ((b-a)+b)%c==0) || (((b-c)+b)!=0 && ((b-c)+b)%a==0))f=1;
    }
    cout<<(f ? "YES\n" : "NO\n");
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
}
