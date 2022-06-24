#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>G[],int root)
{
    queue<int>q;
    vector<int>parent[10000];
    set<int>st;
    int node,level[10000],visited[10000];
    memset(visited,0,sizeof(visited));
    q.push(root);
    level[root]=0;
    parent[root].push_back(-1);

    while(!q.empty())
    {
        node=q.front();
        q.pop();
        st.insert(node);
        visited[node]=1;
        //printf("node %d \nchild ",node);
        for(int i:G[node])
        {
            if(visited[i]==0){
            q.push(i);
            level[i]=level[node]+1;
            parent[i].push_back(node);
            for(int j:parent[node])
            parent[i].push_back(j);
            }
        }
        //printf("\n");

    }

    for(int i:st)
    {
        printf("Node=%d: \nlevel=%d\nParent -> ",i,level[i]);
        for(int j:parent[i])printf("%d ",j);
        printf("\n");
    }

}

int main()
{
    freopen("input.txt","r",stdin);

    int edge,root=0,ver,u,v;
    vector<int>node[10000];
    cin>>edge>>ver;
    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;
        node[u].push_back(v);
    }
    cout<<"Root=" ;
    cin>>root;
    bfs(node,root);
}
