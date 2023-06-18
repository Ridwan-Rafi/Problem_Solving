#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        int burl=0;
        cin>>n>>k;
        cin>>s;

        map<char,int>mp;

        for(int i=0; i<n; i++)
            mp[s[i]]++;

        char c;
        for(int i=0; i<n; i++)
        {
            if(s[i]>='a' && s[i]<='z' && mp[s[i]]>0)
            {
                c=s[i]-32;
                if(mp[c]>0)
                {
                    burl++;
                    mp[c]--;
                    mp[s[i]]--;
                }
            }
            else if(s[i]>='A' && s[i]<='Z' && mp[s[i]]>0)
            {
                c=s[i]+32;
                if(mp[c]>0)
                {
                    burl++;
                    mp[c]--;
                    mp[s[i]]--;
                }
            }
        }

        for(int i=0; i<n && k>0; i++)
        {
            if(mp[s[i]]>1)
            {
                mp[s[i]]-=2;
                burl++;
                k--;

            }

        }

        cout<<burl<<'\n';
    }
}
