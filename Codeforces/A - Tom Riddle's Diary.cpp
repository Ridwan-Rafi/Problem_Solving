#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,ln,f;
    string s;
    map<string,int> m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
       m[s]++;
       if(m[s]>1)cout<<"YES\n";
       else cout<<"NO\n";
    }
}
