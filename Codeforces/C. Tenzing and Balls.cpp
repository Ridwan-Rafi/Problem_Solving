
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    pair<int,int> ar[n+4],fr,sc;
    vector<pair<int,int>>vc;
    for(int i=0;i<=n+2;i++)
    {
        ar[i].first=-1;
        ar[i].second=-1;
    }
    int val;
    for(int i=1;i<=n;i++)
    {
        cin>>val;
        if(ar[val].first==-1)ar[val].first=i;
        else ar[val].second=i;
    }
    ll dist,tot=0;

    for(int i=1;i<=n;i++)
    {
        if(ar[i].first==-1 || ar[i].second==-1)continue;
        vc.push_back(ar[i]);
    }

    sort(vc.begin(),vc.end());

    for(auto i:vc)cout<<i.first<<' '<<i.second<<endl;
int mx=0;
    for(auto i = vc.begin();i!=vc.end();i++)
    {
        fr=*i;
        if(i+1 != vc.end())sc=*(i+1);
        else if(fr.second>mx){
            dist=fr.second-fr.first+1;
            tot+=dist;
            break;
        }

        if(fr.second>mx && fr.second>=sc.second)
        {
            mx=fr.second;
            dist=fr.second-fr.first+1;
            tot+=dist;
            i++;
        }
        else if(fr.second>mx && fr.second<sc.first)
        {
            mx=fr.second;
            dist=fr.second-fr.first+1;
            tot+=dist;
        }
        else{
            if(sc.first-1>mx && sc.first-1-fr.first>=1)
            {
                mx=sc.first-1;
                dist=sc.first-fr.first;
                tot+=dist;
            }
            else if(fr.second>mx && sc.second-(fr.second+1)>0)
            {
                mx=fr.second;
                dist=fr.second-fr.first+1;
                tot+=dist;
                sc.first=fr.second+1;
                *(i+1)=sc;
            }
        }
        cout<<tot<<endl;
    }

    cout<<tot<<endl;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;while(t--)
    solve();
}
