#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        int l;
        vector<pair<int,string>>vc;
        for(int i=0;i<n;i++)
        {
            cin>>s>>l;
            vc.push_back({-l,s});
        }
        sort(vc.begin(),vc.end());
        for(pair<int,string> p:vc)
        {
            cout<<p.second<<'\n';
        }
    }
}
