#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,ar[200111],cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n>>k;

        for(int i=0; i<n; i++)
            cin>>ar[i];
        if(k==1)
        {
            n-=3;
            cnt++;
            cnt=cnt+(n/2);
        }
        else
        {
            for(int i=1; i<n-1; i++)
            {
                //cout<<ar[i]<<endl;
                //printf("i %d\n",i);
                if(ar[i]>ar[i-1]+ar[i+1])cnt++;
            }
        }

        cout<<cnt<<endl;
    }
}
