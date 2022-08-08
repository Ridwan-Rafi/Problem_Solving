#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,j,f=0,p;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(f==0)
        {
            sum=sum+i;
            f=1;
        }
        else
        {
            sum=sum-i;
            f=0;
        }
    }
    cout<<sum<<endl;
}

