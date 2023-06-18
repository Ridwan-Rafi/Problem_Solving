#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ln,t;
    string s,ss;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        ss.clear();
        getline(cin,s);
        ln=s.size();
        for(int i=0; i<ln; i++)
        {
            if(s[i]==' ' || i==ln)
            {
                reverse(ss.begin(),ss.end());
                cout<<ss;
                cout<<' ';
                ss.clear();
            }
            else
            {
                ss+=s[i];
            }
        }
        reverse(ss.begin(),ss.end());
        cout<<ss;
        cout<<'\n';
    }
}
