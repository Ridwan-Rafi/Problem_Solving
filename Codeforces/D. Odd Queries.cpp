#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q,x,y,val,ln;
    long long int tsum=0,lsum,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        long long int ar[n+4];

        ar[0]=0;
        for(int i=1;i<=n;i++){
                cin>>ar[i];
        }

        for(int i=2;i<=n;i++)ar[i]+=ar[i-1];
        tsum=ar[n];
        bool vlf=0;
        for(int i=0;i<q;i++)
        {
            cin>>x>>y>>val;
            ln=y-x+1;

            if((val&1)==1){
                    if((ln&1)==0)vlf=0;
                    else vlf=1;
            }
            else vlf=0;
            sum=ar[y]-ar[x-1];
            lsum=tsum-sum;

            if((lsum&1)==0)
            {
                if(vlf==1)cout<<"YES\n";
                else cout<<"NO\n";
            }
            else{
                if(vlf==0)cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}

