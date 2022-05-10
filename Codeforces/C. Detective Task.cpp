#include<bits/stdc++.h>
using namespace std;

bool ch(string s)
{
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])return false;
    }
    return true;
}
int main()
{
    int t,ln,cnt=0;
    string s;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>s;
        ln=s.size();
        for(int i=0;i<ln;i++)
        {
            if(s[i]=='1')cnt=1;
            else if(s[i]=='?')cnt++;
            else if(s[i]=='0'){
                cnt++;
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
