#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ar[2][2],cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]==1)cnt++;
            }
        }
        if(cnt==0)cout<<0<<endl;
        else if(cnt==4)cout<<2<<endl;
        else cout<<1<<endl;
    }
}
