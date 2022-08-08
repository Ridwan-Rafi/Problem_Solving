#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,p=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        p=1;
        for(int j=1;j<=i;j++)
        {
            p=i*p;
        }
        sum=sum+p;
    }
    cout<<sum<<endl;
}

