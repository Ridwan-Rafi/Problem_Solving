#include<bits/stdc++.h>
using namespace std;
string tolower(string d)
{
    int ln=d.size();
    for(int i=0;i<ln;i++)
    {
        if(d[i]>='A' && d[i]<='Z')d[i]=d[i]+32;
    }
    return d;
}
int main()
{
    int t;
    string s,ss="yes";
    cin>>t;
    while(t--)
    {
      cin>>s;
      s=tolower(s);
      //cout<<s<<endl;
      if(s==ss)cout<<"YES\n";
      else cout<<"NO\n";
    }
}
