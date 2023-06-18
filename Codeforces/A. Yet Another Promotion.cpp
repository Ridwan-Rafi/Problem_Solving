#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,n,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>m;
        long long int price=0,p1,p2;
        long long int mn=min(a,b);
        if(n<=m)
        {
            price=n*mn;
            cout<<price<<endl;
        }
        else
        {
            long long int kotokg=n/(m+1);

            p1=kotokg*m*a;
            if(n%(m+1)!=0)
            {
                p1+=mn*(n%(m+1));
            }



            p2=b*n;

            cout<<min(p1,p2)<<endl;
        }
    }
}
