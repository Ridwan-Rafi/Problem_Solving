#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;

        int ar[m+4],ln=m+n+4;
        bool f[n+m+4];

        for(int i=0;i<ln;i++)f[i]=0;

        for(int i=0;i<m;i++)
        {
            cin>>ar[i];
        }
        vector<int>vc;
        for(int i=1;i<=m;i++)
        {
            if(f[ar[i-1]]==0){
                vc.push_back(i);
                f[ar[i-1]]=1;
            }

            if(vc.size()==n)break;
        }

        for(int i=vc.size();i<n;i++)vc.push_back(-1);
        reverse(vc.begin(),vc.end());

        for(int i:vc)cout<<i<<' ';
        cout<<'\n';
    }
}
