#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,lcnt=0,hcnt=0;
    cin>>n;
    long long int scr,high=-1,low=1000000000;
    for(int i=0;i<n;i++)
    {
         cin>>scr;
         if(scr<low)
         {
             low=scr;
             lcnt++;
         }
         if(scr>high)
         {
             high=scr;
             hcnt++;
         }
    }
    cout<<hcnt-1<<" "<<lcnt-1<<endl;

    return 0;
}
