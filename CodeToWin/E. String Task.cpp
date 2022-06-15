#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t,n,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        f=0;
        for(int i=0,j=n-1;i<=j;i++,j--)
        {
           // cout<<i<<' '<<j<<endl;
            if(s[i]>s[j])
            {
                //if(s[i]!='a' && s[i]-1 == s[j])continue;
                if(s[i]!='a' && s[j]!='z' && s[i]-1 == s[j]+1)continue;
                //else if(s[j]!='a' && s[i] == s[j]+1)continue;
                else{
                    f=1;
                    break;
                }
            }
             else if(s[i]<s[j])
            {
              //  if(s[i]!='z' && s[i]+1 == s[j])continue;
                 if(s[i]!='z' && s[j]!='a' && s[i]+1 == s[j]-1)continue;
                //else if(s[j]!='a' && s[i] == s[j]-1)continue;
                else{
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            cout<<"opps!\n";
        else cout<<"Yeahh!\n";
    }
}
