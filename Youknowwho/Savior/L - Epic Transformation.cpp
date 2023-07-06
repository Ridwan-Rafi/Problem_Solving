#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mx,mxval,cnt,val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            mp[val]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto [x,y]:mp)
        {
            pq.push({y,x});
        }

        int remain=n;
        while(pq.size()>1)
        {
            auto [f,fval] = pq.top();
            pq.pop();
            auto [s,sval] = pq.top();
            pq.pop();
            //cout<<f<<' '<<fval<<endl;
            //cout<<s<<' '<<sval<<endl<<endl;
            f--;
            s--;
            remain-=2;

            if(f>0)pq.push({f,fval});
            if(s>0)pq.push({s,sval});
        }
        cout<<remain<<endl;
    }
}
