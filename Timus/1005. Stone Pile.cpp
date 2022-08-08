#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[30],r=0,l=0,ans=1000000001,tl=0,p,b,o;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        tl+=ar[i];
    }
   p=1;
   for(int i=0;i<n;i++)
   {
       p=p*2;
   }
   for(int i=1;i<p;i++)
   {
       b=i;
       l=0,r=0;
       for(int j=0;j<n;j++)
       {
           o=1<<j;
           if(b&o)
           {
           //    printf("1 ");
               r+=ar[j];
           }
         //  else printf("0 ");
       }
       //printf("\n");
       l=tl-r;
       ans=min(ans,abs(l-r));
   }

    cout<<ans<<endl;
}
