#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum=0;
    cin>>n;
    long long int ar[n+5];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n;i++)
        sum=sum+ar[i];

    cout<<sum<<endl;

    return 0;
}
