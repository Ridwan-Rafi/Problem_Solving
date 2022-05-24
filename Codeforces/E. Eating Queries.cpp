#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[150011],q,cnt,l;
    long long int sm,ss,sr[150011];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        sm=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        sort(ar,ar+n,greater<int>());
        sr[0]=ar[0];
        for(int i=1;i<n;i++)
        {
            sr[i]=ar[i]+sr[i-1];
        }

        for(int j=0;j<q;j++)
        {
            cnt=ss=0;
            scanf("%d",&l);
            if(l>sr[n-1])printf("-1\n");
            else{
               cnt=lower_bound(sr,sr+n,l)-sr;
               printf("%d\n",cnt+1);
            }
        }
    }
}
