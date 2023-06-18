#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    string s,ss;
    int ln;
    while(cin>>s)
    {
        ln=s.size();
        for(int i=0; i<ln; i++)
        {
            //cout<<s[i];
            if(s[i]>='A' && s[i]<='Z'){
                    s[i]+=32;
                    ss+=s[i];
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                ss+=s[i];
            }
            else
            {
                if(!ss.empty()){
                mp[ss]++;
                ss.clear();
                }
                else continue;
            }
        }
        if(!ss.empty())
        {
        mp[ss]++;
        ss.clear();
        }
        //cout<<s<<endl;

    }

    for(auto i:mp)cout<<i.first<<'\n';
}
