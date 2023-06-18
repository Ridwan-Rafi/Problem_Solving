#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ln,cass=1;
    string s;
    cin>>t;
    while(t--)
    {
        map<char,int>mp;

        cin>>s;
        ln=s.size();
        set<char>st;
        for(int i=0;i<ln;i++){
                st.insert(s[i]);
                mp[s[i]]++;
        }
        cout<<"Case "<<cass++<<": ";
        if(st.size()<26)cout<<0<<'\n';
        else{
            int ans=INT_MAX;
            for(auto i:mp)
            {
                ans=min(ans,i.second);
            }
            cout<<ans<<'\n';
        }
    }
}
