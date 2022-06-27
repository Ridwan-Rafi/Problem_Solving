#include<bits/stdc++.h>
using namespace std;

vector<long long int>g[100];
map<long long int,int>m;
int level[10000];
int visited[100];
long long int no[90],it;

int bfs(long long int st,int ttl)
{
    long long int node;
    int cnt=1;
    queue<long long int>q;
    q.push(st);
    level[st]=0;
    while(!q.empty())
    {
        node=q.front();
        q.pop();
        visited[node]=1;
        //printf("Node %d level %d\n",no[node],level[node]);
        if(level[node]==ttl)break;

        for(int i:g[node])
        {
            if(visited[i]==0)
            {
                q.push(i);
                visited[i]=1;
                level[i]=level[node]+1;
               // printf("cld %d level %d\n",no[i],level[i]);
                if(level[i]<=ttl)
                    cnt++;
            }
        }
    }
    return cnt;
}

void zz()
{
    for(int i=0;i<100;i++)
        visited[i]=0;
}

void z()
{
    for(int i=0;i<100;i++)
    {
        g[i].clear();
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    int n,ttl,ret,cn=1,ver;
long long int u,v,st,tmp;

    while(cin>>n)
    {
        if(n==0)break;
        m.clear();
        it=1;

        ver=0;
        z();
        for(int i=0;i<n;i++)
        {
            cin>>u>>v;

            if(m[u]==0)
            {
                no[it]=u;
                m[u]=it++;
            }
            if(m[v]==0)
                {
                    no[it]=v;
                    m[v]=it++;
                }
//printf("u %d   %d  ",u,m[u]);
//printf("v %d   %d\n",v,m[v]);
            g[m[u]].push_back(m[v]);
            g[m[v]].push_back(m[u]);
        }
ver=m.size();
        while(1)
        {
            cin>>st>>ttl;
            if(st==0 && ttl==0)break;
            zz();
            tmp=st;
            st=m[st];
            if(st==0)
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cn++,ver,tmp,ttl);
            else{
            ret=bfs(st,ttl);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cn++,ver-ret,no[st],ttl);
            }
        }
    }
    return 0;
}
