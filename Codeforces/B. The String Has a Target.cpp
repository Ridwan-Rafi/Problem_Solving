#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        char mn='z';
        cin>>n>>s;
        for(int i=0;i<n;i++)
            mn=min(mn,s[i]);

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==mn){
                    s.erase(s.begin()+i);
            break;
            }
        }

        s=mn+s;
        cout<<s<<endl;
    }
}
