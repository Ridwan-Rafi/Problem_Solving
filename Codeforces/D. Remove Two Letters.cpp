#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n>>s;
        map<string,bool>mp;
        string cm,cmm;
        int cnt=1;
        if(n==3)
        {
            if(s[0]==s[2])cout<<1<<'\n';
            else cout<<2<<'\n';
        }
        else
        {
            for(int i=1; i<n-1; i++)
            {

                if(s[i-1]!=s[i+1])cnt++;
            }
        cout<<cnt<<endl;
        }

    }
}
