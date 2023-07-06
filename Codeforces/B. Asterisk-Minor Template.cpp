#include<bits/stdc++.h>
using namespace std;

string b;

bool check(string &s)
{
    bool ff=0;
    if (b.find(s) != std::string::npos)
    {
        ff=1;
        //std::cout << "found!" << '\n';
    }
    return ff;
}

int main()
{
    int t,la,lb,llb,mx;
    cin>>t;
    string a;
    while(t--)
    {
        mx=-1;
        cin>>a>>b;
        la=a.size();
        lb=b.size();
        string s,ans;
        llb=0;
        for(int i=0; i<la; i++)
        {
            s.clear();
            for(int j=i; j<la; j++)
            {
                s+=a[j];
                if(check(s))
                {
                    llb=s.size();
                    if(mx<llb)
                    {
                        ans=s;
                        mx=llb;
                    }
                }
            }
        }
       // cout<<ans<<endl;
        if(ans.size()==0)cout<<"NO\n";
        else if(mx==1)
        {
            if(a[0]==ans[0] && b[0]==ans[0])cout<<"YES\n"<<ans<<"*\n";
            else if(a[la-1]==ans[0] && b[lb-1]==ans[0])cout<<"YES\n"<<'*'<<ans<<'\n';
            else cout<<"NO\n";
        }
        else{
                cout<<"YES\n";
            cout<<'*'<<ans<<'*'<<'\n';
        }
    }
}
