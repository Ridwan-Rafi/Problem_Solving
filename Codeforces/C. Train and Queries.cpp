#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,v,k,l,r,mn,mx;
    cin>>t;
    while(t--)
    {
        map<int,set<int>>node;
        //map<int,set<int>>::iterator it;
        //map<int,vector<int>>::iterator nit;

        mn=INT_MAX;
        mx=-1;
        scanf("%d %d",&n,&k);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&v);
            node[v].insert(i);
        }
        for(int i=0;i<k;i++)
        {
            mn=INT_MAX;
        mx=-1;
            scanf("%d %d",&l,&r);
            if(node[l].size()==0 || node[r].size()==0)printf("NO\n");
            else{
            /*for(auto m:node[l])
            {

              //  printf("l=%d\n",m);
                mn=min(mn,m);
            }
            for(auto m:node[r])
            {
                //printf("r=%d\n",m);
                mx=max(mx,m);
            }*/
           auto it=node[l].begin();
            mn= *it;
        auto itt=node[r].rbegin();
            mx=*itt;
            //printf("mn = %d  mx= %d\n",mn,mx);
            if(mn<=mx)printf("YES\n");
            else printf("NO\n");
            }
        }
    }
}
