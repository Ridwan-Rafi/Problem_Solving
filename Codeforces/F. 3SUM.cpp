#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[12],tt,m;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<12;i++)ar[i]=0;

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>tt;
            m=tt%10;
            //printf("m %d\n",m);
            ar[m]++;
        }

        if(ar[0]>=2 && ar[3]>=1)cout<<"YES\n";
        else if(ar[0]>=1 && ar[1]>=1 && ar[2]>=1)cout<<"YES\n";
        else if(ar[0]>=1 && ar[4]>=1 && ar[9]>=1)cout<<"YES\n";
        else if(ar[0]>=1 && ar[5]>=1 && ar[8]>=1)cout<<"YES\n";
        else if(ar[0]>=1 && ar[6]>=1 && ar[7]>=1)cout<<"YES\n";
        else if(ar[1]>=3)cout<<"YES\n";
        else if(ar[1]>=1 && ar[3]>=1 && ar[9]>=1)cout<<"YES\n";
        else if(ar[1]>=1 && ar[4]>=1 && ar[8]>=1)cout<<"YES\n";
        else if(ar[1]>=1 && ar[5]>=1 && ar[7]>=1)cout<<"YES\n";
        else if(ar[1]>=1 && ar[6]>=2)cout<<"YES\n";
        else if(ar[2]>=2 && ar[9]>=1)cout<<"YES\n";
        else if(ar[2]>=1 && ar[3]>=1 && ar[8]>=1)cout<<"YES\n";
        else if(ar[2]>=1 && ar[4]>=1 && ar[7]>=1)cout<<"YES\n";
        else if(ar[2]>=1 && ar[5]>=1 && ar[6]>=1)cout<<"YES\n";
        else if(ar[3]>=2 && ar[7]>=1)cout<<"YES\n";
        else if(ar[3]>=1 && ar[6]>=1 && ar[4]>=1)cout<<"YES\n";
        else if(ar[3]>=1 && ar[5]>=2)cout<<"YES\n";
        else if(ar[4]>=2 && ar[5]>=1)cout<<"YES\n";
        else if(ar[6]>=1 && ar[8]>=1 && ar[9]>=1)cout<<"YES\n";
        else if(ar[7]>=1 && ar[8]>=2)cout<<"YES\n";
        else if(ar[7]>=2 && ar[9]>=1)cout<<"YES\n";
        else if(ar[9]>=2 && ar[5]>=1)cout<<"YES\n";

        else cout<<"NO\n";
    }
}
