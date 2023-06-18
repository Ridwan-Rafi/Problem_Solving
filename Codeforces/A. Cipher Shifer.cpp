#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    string s,a;
    char c;
    cin>>n>>s;
    c=s[0];
    for(int i=1;i<n;i++)
    {
        if(c==s[i])
        {
            a+=c;
            if(i+1<n){
                    c=s[i+1];
                    i++;
            }
        }
    }
    cout<<a<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}

