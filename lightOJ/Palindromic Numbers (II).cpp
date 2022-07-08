#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,ss;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s;
        ss=s;
        reverse(ss.begin(),ss.end());
        //cout<<ss<<endl;
        if(ss==s)
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
}
