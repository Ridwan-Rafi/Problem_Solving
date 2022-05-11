#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ln,t,ss,sss;
    cin>>t;
    while(t--)
    {
        cin>>s;
        ss=sss=0;
        ln=s.size();
        for(int i=0;i<3;i++)
        {
            ss+=s[i]-'0';
        }
        for(int i=3;i<ln;i++)
        {
            sss+=s[i]-'0';
        }
        if(ss==sss)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
