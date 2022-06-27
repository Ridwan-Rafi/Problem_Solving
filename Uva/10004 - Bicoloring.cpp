#include<bits/stdc++.h>
using namespace std;

vector<int>g[1000];
int color[1000];

bool bfs(int root)
{
    memset(color,0,sizeof(color));
    queue<int>q;
    int node;
    q.push(root);
    color[root]=1;
    while(!q.empty())
    {
        node=q.front();
        q.pop();
        for(int i:g[node])
        {
            if(color[i]==0)
            {
                q.push(i);
                if(color[node]==1)
                color[i]=2;
                else
                color[i]=1;
            }
            else if(color[i]==color[node])
            {
                return false;
            }
        }
    }
    return true;
}

void z()
{
    for(int i=0;i<222;i++)
    {
        g[i].clear();
    }
}

int main()
{
    //freopen("input.txt","r",stdin);

    int n,l,u,v,root;
    while(cin>>n)
    {
        if(n==0)break;
        z();
        cin>>l;
        for(int i=0;i<l;i++)
        {
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
            root=u;
        }
        if(bfs(root))
            cout<<"BICOLORABLE.\n";
        else
            cout<<"NOT BICOLORABLE.\n";
    }
}
