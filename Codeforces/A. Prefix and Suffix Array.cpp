#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n*2;
        string s,a,b;
        vector<pair<int,string>>vc;
        pair<int,string>p;
        for(int i=2;i<n;i++)
        {
            cin>>s;
            vc.push_back({s.size(),s});
        }

        sort(vc.begin(),vc.end());
        p=*vc.rbegin();
        a=p.second;
        p=*(vc.rbegin()+1);
        b=p.second;
        reverse(a.begin(),a.end());

        if(a==b)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
