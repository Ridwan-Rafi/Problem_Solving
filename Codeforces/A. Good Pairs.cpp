#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mi,mj,m,a;
    long long int f;
    cin>>t;
    while(t--)
    {
        f=9999999999999;m=-1,mj=1,mi=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a>m)
            {
                m=a;
                mj=i;
            }
            if (a<f){
                f=a;
                mi=i;
            }
        }
        cout<<mi<<' ' <<mj<<endl;
    }
}
