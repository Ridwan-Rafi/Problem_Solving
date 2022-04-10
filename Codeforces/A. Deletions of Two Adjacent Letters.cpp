#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,r,ln,f;
    cin>>t;
    string s;
    char c;

    while(t--)
    {
        f=0;
        cin>>s>>c;
        ln=s.size();
        for(int i=0;i<ln;i++)
        {
            if(s[i]==c)
            {
                l=i;
                r=ln-l-1;
               // cout<<l<<' '<<r<<endl;
                if(l%2==0 && r%2==0)
                    f=1;
            }
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
