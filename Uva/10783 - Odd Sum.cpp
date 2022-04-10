#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,sum;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        sum=0;
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            if(j%2==1)
                sum=sum+j;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
