#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,j,c=1,p;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       p=i*(n-i+1);
        sum=sum+p;
    }
    cout<<sum<<endl;
}


