#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,bool> dir;
vector<int> node[50055];
pair<int,int>p;

bool visited[50055];
int cnt=0;
void dfs(int str, int par)
{
    if(visited[str]==1)return;
    visited[str]=1;

    p={par,str};
    if(dir[p]==1)cnt++;

    for(int i: node[str])
    {
        dfs(i,str);
    }

}

int minReorder(int n, vector<vector<int>>& connections) {
    int u,v;
    for(vector<int> vc: connections)
    {
        u=vc[0];
        v=vc[1];
        //cout<<u<<' '<<v<<'\n';
        node[u].push_back(v);
        node[v].push_back(u);
        p={u,v};
        dir[p]=1;
    }

    dfs(0,-1);

    return cnt;
}

int main()
 {
        vector<vector<int>> vc;
        vector<int>ivc;
        int n,u,v;
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            cin>>u>>v;
            ivc.clear();
            ivc.push_back(u);
            ivc.push_back(v);
            vc.push_back(ivc);
        }

        int ans = minReorder(n,vc);
        cout<<ans<<endl;
 }
