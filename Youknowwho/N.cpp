#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ln;
    string s;
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--)
    {
        cin>>s;
        set<char>ch;
        ln=s.size();
        for(int i=0; i<ln; i++)
            ch.insert(s[i]);
        s.clear();
        int j=0;
        for(char cc:ch)s.push_back(cc);
        cout<<s<<endl;
        mp[s]++;
    }
    int ans=0,cnt;
    string tmp;
    for(auto i: mp)
    {
        s=i.first;
        cnt=i.second;
        ans+=(cnt-1);
        ln=s.size();
        for(int j=0; j<ln; j++)
        {
            tmp=s;
            tmp.erase(tmp.begin()+j);
            cout<<tmp<<endl;
            if(mp.find(tmp)!=mp.end())ans+=mp[tmp];
        }
        cout<<'\n';
    }

     for(auto i: mp)
        {
            s=i.first;
            cnt=i.second;
            cout<<s<<endl;
        }
        cout<<ans<<endl;
}
