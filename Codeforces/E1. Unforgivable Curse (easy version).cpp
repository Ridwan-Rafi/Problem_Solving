#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;

    cin>>t;
    string s,s1;
    while(t--)
    {
        cin>>n>>k;
        cin>>s>>s1;
        bool f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                if(i+3<n && i+4<n){
                        f=1;
                        break;
                }
                else if(s[i+3]!=s1[i] && s[i+4]!=s1[i]){
                f=1;
                        break;
                }
                else{
                    if(s[i+3]==s1[i])swap(s[i+3],s[i]);
                    else if(s[i+4]==s1[i])swap(s[i+4],s[i]);
                }
            }
        }

        f?cout<<"NO\n" : cout<<"YES\n";
    }
}
