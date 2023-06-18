#include<bits/stdc++.h>
using namespace std;

long long int zog(long long int n)
{
    long long int sum;
    sum=(22+((n-1)*2))*n;
    sum/=2;
    return sum;
}
int main()
{
    long long int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long int bi;
        bi=zog(n-4)+26;
        cout<<bi<<endl;
    }
}
