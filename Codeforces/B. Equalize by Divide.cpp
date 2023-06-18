#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        priority_queue<pair<int,int>>pq;

        int ar[n+5],mn=INT_MAX,ind;
        for(int i=1; i<=n; i++)
        {
            cin>>ar[i];
            if(mn>ar[i])
            {
                mn=ar[i];
                ind=i;
            }

            pq.push({ar[i],i});
        }

        bool f=0;
        for(int i=2; i<=n; i++)if(ar[i]!=ar[i-1])f=1;

        int tmp,idx;
        if(n==1 || f==0)cout<<0<<'\n';
        else
        {
            if(mn==1)cout<<-1<<'\n';
            else
            {
                vector<pair<int,int>>vc;
                while(pq.top().first != mn)
                {
                    tmp=pq.top().first;
                    idx=pq.top().second;
                    //cout<<idx<<' '<<ind<<'\n';
                    vc.push_back({idx,ind});
                    pq.pop();
                    tmp=ceil((double)tmp/mn);
                    if(mn>tmp)
                    {
                        mn=tmp;
                        ind=idx;
                    }
                    pq.push({tmp,idx});
                }

                cout<<vc.size()<<'\n';
                for(auto i:vc)cout<<i.first<<' '<<i.second<<'\n';

            }
        }
    }
}
