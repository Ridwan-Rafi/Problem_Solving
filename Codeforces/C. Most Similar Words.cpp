#include<bits/stdc++.h>
using namespace std;
int dff(string s,string s1,int ln)
{
    int ss=0;
    for(int i=0;i<ln;i++)
    {
        ss=ss+(abs(s[i]-s1[i]));
    }
    return ss;
}
int main()
{
    string s[60];
    int t,n,m,df,ln;
     ;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        df=11111111;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
              ln=dff(s[i],s[j],m);
              df=min(df,ln);
           }
       }

        cout<<df<<endl;
    }
}

