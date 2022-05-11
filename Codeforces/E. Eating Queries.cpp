#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[150011],q,cnt,l;
    long long int sm,ss;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        sm=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            sm+=ar[i];
        }
        sort(ar,ar+n);
        for(int j=0;j<q;j++)
        {
            cnt=ss=0;
            scanf("%d",&l);
            if(l>sm)printf("-1\n");
            else{
               for(int i=n-1;i>=0;i--)
               {
                   if(ss>=l)break;
                   ss+=ar[i];
                   cnt++;
               }
               printf("%d\n",cnt);
            }
        }
    }
}
