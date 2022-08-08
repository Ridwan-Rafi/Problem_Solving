#include<bits/stdc++.h>
using namespace std;
vector<int>ar[200111];
int visited[200111];
int level[200111];
int ap[200111];
set<int>nod;

bool dfs()
{
    int n,c;
    stack<int>st;
    auto it=nod.begin();
    n=*it;
    level[n]=0;
    // cout<<n;
    st.push(n);
    while(!st.empty() && it!=nod.end())
    {
        if(st.empty())
        {
            it++;
            n=*it;
            st.push(n);
            level[n]=0;
        }
        else
        {
            c=st.top();
            st.pop();
            if(visited[c]==0)
            {
                visited[c]=1;
                for(int t:ar[c])
                {
                    if(visited[t]==0)
                    {
                        st.push(t);
                        level[t]=level[c]+1;
                    }
                    else
                    {
                        if(level[c]%2==0)
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

void zz(int n)
{
    for(int i=0; i<=n+4; i++)
    {
        ar[i].clear();
        visited[i]=0;
        ap[i]=0;
    }
}
int main()
{
    int t,n,u,v,cnt;
    bool f;
    cin>>t;
    while(t--)
    {
        f=false;
        cnt=0;
        zz(n);
        nod.clear();

        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>u>>v;
            ap[u]++;
            ap[v]++;

            if(ap[u]==1)cnt++;
            if(ap[v]==1)cnt++;
            if(ap[v]==2)cnt--;
            if(ap[u]==2)cnt--;

            if(u==v || ap[u]>2 || ap[v]>2)f=true;

            ar[u].push_back(v);
            ar[v].push_back(u);

            nod.insert(u);
            nod.insert(v);
        }
        if(f==true && cnt!=0)
            cout<<"1NO\n";
        else
        {
            if(dfs())
                cout<<"YES\n";
            else
                cout<<"2NO\n";
        }
    }
}
