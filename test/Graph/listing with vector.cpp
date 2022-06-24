#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int edge,node,u,v;
    vector<int> listt[10000],indeg[10000];
    set<int>st;
    cin>>edge>>node;
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        listt[u].push_back(v);
        indeg[v].push_back(u);
        st.insert(u);
        st.insert(v);
    }

    for(int i:st)
    {
        printf("%d -> ",i);
        for(int j:listt[i])
        {
            printf("%d ",j);
        }
        printf("\nindegree = %d \noutdegree=%d\n\n",indeg[i].size(),listt[i].size());

    }


}
