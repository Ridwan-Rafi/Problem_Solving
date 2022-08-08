#include<bits/stdc++.h>
using namespace std;

vector<int>a[20022];
set<int>ss;
int visited[20022],color[20022],vam,luk,ans;

void bfs()
{
    int node;
    node=*(ss.begin());
    ss.erase(ss.begin());
    stack<int>st;
    st.push(node);

    while(!st.empty() || !ss.empty())
    {
        if(st.empty())
        {
            ans+=max(vam,luk);
            vam=luk=0;
            node=*(ss.begin());
            ss.erase(ss.begin());
            st.push(node);
        }

        node=st.top();
        st.pop();

        if(visited[node]==0)
        {
            if(color[node]==-1)
            {
                color[node]=0;
                vam++;
            }
            else if(color[node]==1)
            {
                luk++;
            }
            else if(color[node]==0)
            {
                vam++;
            }

            visited[node]=1;
            for(int i:a[node])
            {
                st.push(i);
                ss.erase(i);

                if(color[node]==1)
                {
                    color[i]=0;
                }
                else if(color[node]==0)
                {
                    color[i]=1;
                }
            }
        }
    }
    ans+=max(vam,luk);
}

void zero()
{
    for(int i=0; i<20022; i++)
    {
        a[i].clear();
        visited[i]=0;
        color[i]=-1;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,u,v;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        vam=luk=ans=0;
        zero();
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
            ss.insert(u);
            ss.insert(v);
        }
        bfs();
        printf("Case %d: %d\n",tt,ans);
    }
}
