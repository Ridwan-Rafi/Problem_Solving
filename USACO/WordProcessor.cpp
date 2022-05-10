#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("word.in","r",stdin);
    freopen("word.out","w",stdout);

    string s[111];
    int n,k,ss;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ss=0;
    for(int i=0;i<n;i++)
    {
        if(ss+s[i].size()<=k)
        {
            if(ss>0)cout<<' ';
        cout<<s[i];

        ss+=s[i].size();
        }
        else{
            ss=0;
            cout<<"\n";
            i--;
        }
    }
}
